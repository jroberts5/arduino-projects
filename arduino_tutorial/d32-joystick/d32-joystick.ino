
int xPin = A0;
int yPin = A1;
int sPin = 6;
int xVal;
int yVal;
int sVal;
int dt = 200;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin,HIGH);
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  delay(dt);
  Serial.print("xVal: ");
  Serial.print(xVal);
  Serial.print(" | yVal: ");
  Serial.print(yVal);
  Serial.print(" | Switch State: ");
  Serial.println(sVal);
}
