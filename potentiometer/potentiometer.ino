int voltPin = A3;
int readingVal;
float V2;
float voltage = 5.0;
//Max voltage in arduino is 1023, need to scale
float ard_voltage = 1023.0; 
int printDelay = 500;


void setup() {
  // put your setup code here, to run once:
  // bog rate needs to be the same from the serial monitor
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readingVal = analogRead(voltPin);
  V2 = (voltage/ard_voltage)* readingVal;
  Serial.println(V2);
  delay(printDelay);
}
