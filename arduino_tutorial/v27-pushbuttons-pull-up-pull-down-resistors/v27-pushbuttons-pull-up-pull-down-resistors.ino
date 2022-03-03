int ledPin = 8;
int buttonPin = 12;
int dt = 100;
int buttonRead;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  buttonRead = digitalRead(buttonPin); // Returns HIGH or LOW
  Serial.println(buttonRead);
  delay(dt);
  if (buttonRead == 1) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
  

}
