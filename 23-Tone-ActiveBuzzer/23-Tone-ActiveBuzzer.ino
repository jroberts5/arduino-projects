int buzzerPin = 8;
int dt1 = 1;
int dt2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 1; i <= 100; i++){
    digitalWrite(buzzerPin, HIGH);
    delay(dt1);
    digitalWrite(buzzerPin,LOW);
    delay(dt1);
  }
  for (int i = 1; i < 100; i++){
    digitalWrite(buzzerPin, HIGH);
    delay(dt2);
    digitalWrite(buzzerPin,LOW);
    delay(dt2);
  }

}
