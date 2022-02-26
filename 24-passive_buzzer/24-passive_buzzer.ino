int buzzerPin = 8;
int buzzTime1 = 800;


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(buzzTime1);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(buzzTime1);
}
