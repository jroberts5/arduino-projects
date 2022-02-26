
int ledPin = 6;
int buttonPin = 12;
int buttonReadVal;
bool isLedOn = false;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Outputing signal to led
  pinMode(buttonPin, INPUT); //Reading from pin

}

void loop() {
  buttonReadVal = digitalRead(buttonPin);
  Serial.println(buttonReadVal);
  if (buttonReadVal == 0) {
      if (isLedOn == false) {
        digitalWrite(ledPin, HIGH);
        isLedOn = true;
      }
      if (isLedOn) {
        digitalWrite(ledPin, LOW);
        isLedOn = false;
      }
  }

  
  
}
