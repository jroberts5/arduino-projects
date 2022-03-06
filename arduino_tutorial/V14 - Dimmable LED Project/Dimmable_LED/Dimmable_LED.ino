int potPin=A1;
int ledPin = 6;
int potVal;
int ledVal;

void setup() {
  // put your setup code here, to run once:

  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  ledVal = (255.0/1023.0)* potVal;
  analogWrite(ledPin,ledVal);
  Serial.println(ledVal);
  
}
