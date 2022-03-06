int potPin = A1;
int potVal;
int buzzerPin = 8;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while( potVal >= 1000) {
     digitalWrite(buzzerPin, HIGH);
      potVal = analogRead(potPin);
  }
    digitalWrite(buzzerPin, LOW);

}
