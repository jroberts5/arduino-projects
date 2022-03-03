
//GOAL: Have servo display of photo resistor decide light conditions.

#include <Servo.h> //imports the servo module

Servo servo; // Creates the new servo object
int servoPin = 9;
int photoPin = A4; ///analog pin reading
int photoVal; 

//Photoresistor light values
int sunnyLightVal = 600;
int cloudyLightVal = 225;

// Positions for servo
int darkPosition = 0;
int sunnyPosition = 180;
int cloudyPosition = 90;

void setup() {
  Serial.begin(9600);
  pinMode(photoPin, INPUT); 
  servo.attach(servoPin); //attach connects servo to the pin on the arduino
}

void loop() {

//First read digital value from photoresistor
  photoVal = analogRead(photoPin);
  Serial.print("Current PhotoVal Reading: ");
  Serial.println(photoVal);
  delay(200);

  if (photoVal >= sunnyLightVal) {
    servo.write(sunnyPosition); //Left-side down
  } else if (photoVal < sunnyLightVal && photoVal >= cloudyLightVal) {
    servo.write(cloudyPosition); // Half-way up
  } else { 
    servo.write(darkPosition); // Right-side down
  }
}
