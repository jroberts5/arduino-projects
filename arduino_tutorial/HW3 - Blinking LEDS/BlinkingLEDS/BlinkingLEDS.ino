
int ledPin = 6;
int dit = 100;
int dah = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Red Led - blinks 5 times

  // S - in SOS
  digitalWrite(ledPin, HIGH);
  delay(dit);
  digitalWrite(ledPin, LOW);
  delay(dit);
  digitalWrite(ledPin, HIGH);
  delay(dit);
    digitalWrite(ledPin, LOW);
  delay(dit);
   digitalWrite(ledPin, HIGH);
  delay(dit);
    digitalWrite(ledPin, LOW);
  delay(dit);

  // 0 - IN SOS

    digitalWrite(ledPin, HIGH);
  delay(dah);
  digitalWrite(ledPin, LOW);
  delay(dah);
  digitalWrite(ledPin, HIGH);
  delay(dah);
    digitalWrite(ledPin, LOW);
  delay(dah);
   digitalWrite(ledPin, HIGH);
  delay(dah);
    digitalWrite(ledPin, LOW);
  delay(dah);


  // S - in SOS
  digitalWrite(ledPin, HIGH);
  delay(dit);
  digitalWrite(ledPin, LOW);
  delay(dit);
  digitalWrite(ledPin, HIGH);
  delay(dit);
    digitalWrite(ledPin, LOW);
  delay(dit);
   digitalWrite(ledPin, HIGH);
  delay(dit);
    digitalWrite(ledPin, LOW);
  delay(dit);

    delay(1000);

  
  

}
