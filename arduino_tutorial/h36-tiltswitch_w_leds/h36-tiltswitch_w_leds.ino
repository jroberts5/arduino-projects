int redLed = 10;
int greenLed = 12;
int tiltPin = 11;
int tiltVal;


void setup() {
Serial.begin(9600);
pinMode(tiltPin, INPUT);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
digitalWrite(tiltPin, HIGH);

}

void loop() {

  tiltVal = digitalRead(tiltPin);

  if (tiltVal == 0) {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  }

  if (tiltVal == 1) {
    digitalWrite(greenLed, LOW);
    digitalWrite(redLed, HIGH);
  }


  
  Serial.println(tiltVal);

}
