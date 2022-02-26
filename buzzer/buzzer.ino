int buzzerPin = 8;
int myNum;
String msg = "Please enter your number:";
int buzzDelay = 3000;



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){}

  myNum = Serial.parseInt();

  if (myNum > 10){
    digitalWrite(buzzerPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzerPin, LOW); 
  }

}
