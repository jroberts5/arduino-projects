int photoPin = A0;
int greenLed = 6;
int redLed = 5;
int photoVal;
int delayVal = 255;
int lightVal = 90;


void setup() {
  // put your setup code here, to run once:
  pinMode(photoPin, INPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin);
  Serial.println(photoVal);
  delay(delayVal);
  if (photoVal >= lightVal) {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  } else {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  }
}
