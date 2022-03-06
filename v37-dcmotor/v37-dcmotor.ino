int speedPin = 5;
int direction1 = 4;
int direction2 = 3;
int motorSpeed = 255; // Between 0 and 255


void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(direction1, OUTPUT);
  pinMode(direction2, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  //Turns it on
  digitalWrite(direction1, LOW);
  digitalWrite(direction2, HIGH);
  // Sets speed
  analogWrite(speedPin, motorSpeed);
}
