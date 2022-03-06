#include <Servo.h>

int servoPin = 9;
int servoPosition = 90;
Servo servo; // creates a new class for the servo

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);   //attach connects servo to the pin on the arduino
}

void loop() {
  Serial.println("What angle for the Servo?: ");
  while(Serial.available() == 0){}
  servoPosition = Serial.parseInt();
  servo.write(servoPosition); //write sends the servo to the location we set

}
