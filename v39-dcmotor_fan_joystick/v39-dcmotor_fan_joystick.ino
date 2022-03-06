int speedPin = 5;
int direction1 = 4;
int direction2 = 3;
int motorSpeed = 255; // Between 0 and 255
int joyStick = A1;
int joyStickValue;


void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(direction1, OUTPUT);
  pinMode(direction2, OUTPUT);
  pinMode(joyStick, INPUT);
  Serial.begin(9600);

}

void loop() {

  joyStickValue = analogRead(joyStick);
  if (joyStickValue < 500) {
    digitalWrite(direction1, HIGH);
    digitalWrite(direction2, LOW);
    motorSpeed = (-255/501)*joyStickValue+255;
    analogWrite(speedPin, motorSpeed);
  }
  if (joyStickValue > 503) {
    digitalWrite(direction1, LOW);
    digitalWrite(direction2, HIGH);
        Serial.println(joyStickValue);

    motorSpeed = (255/501)*joyStickValue+255;
        Serial.println(motorSpeed);

    analogWrite(speedPin, motorSpeed);
  }
}
