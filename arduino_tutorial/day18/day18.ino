float radius;
float pi = 3.14;
String msg = "What is the radius of your circle";
float area;
String areaOutput = "Your Circle has an area of: ";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()== 0) {
    
  }

  radius = Serial.parseFloat();
  area = pi * radius * radius;
  Serial.print(areaOutput);
  Serial.print(area);

}
