int potPin = A1;
int potVal;
int buzzerPin = 8;
int toneVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  toneVal = ((9940.0/1023.0) * potVal ) + 60;
  digitalWrite(buzzerPin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzerPin, LOW);
  delayMicroseconds(toneVal);
  
}
