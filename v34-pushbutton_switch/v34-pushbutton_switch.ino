int pushButton = 2;
int pushButtonVal;
int dt = 100;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  digitalWrite(pushButton, HIGH);
}

void loop() {

  pushButtonVal = digitalRead(pushButton);
  Serial.print("Button Value: ");
  Serial.println(pushButtonVal);
  delay(dt);

}
