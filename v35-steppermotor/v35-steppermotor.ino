#include <Stepper.h>

int stepsPerRevolution = 2048;
Stepper stepper(stepsPerRevolution, 8, 10, 9 , 11);
int motorSpeed = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
stepper.setSpeed(motorSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:

  stepper.step(stepsPerRevolution);
  delay(200);
  stepper.step(-stepsPerRevolution);
  delay(200);


}
