int redLed = 10;
int greenLed = 12
int tiltPin = 11;
int tiltVal;


void setup() {
Serial.begin(9600);
pinMode(tiltPin, INPUT);
digitalWrite(tiltPin, HIGH);

}

void loop() {

  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);

}
