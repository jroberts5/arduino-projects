
int redPin = 3;
int off = 0;
int low = 50;
int medium = 150;
int high = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, off);
  delay(1000);
  analogWrite(redPin, low);
  delay(1000);
  analogWrite(redPin, medium);
  delay(1000);
  analogWrite(redPin, high);
  delay(1000);


}
