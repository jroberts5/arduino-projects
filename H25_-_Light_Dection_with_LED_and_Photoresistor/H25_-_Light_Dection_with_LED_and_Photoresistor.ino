// Variables for Pins

int photoPin = A0; //Analog Pin
int greenLed = 6;
int redLed = 5;

// Variables for values
int photoVal;
int delayVal = 255;
int lightVal = 60;


void setup() {
  
  Serial.begin(9600); // Data refresh rate
  pinMode(photoPin, INPUT); //Reading Value
  pinMode(greenLed, OUTPUT); //Outputing something
  pinMode(redLed, OUTPUT); //Outputting something

}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(photoPin); // Reads from analog pin
  Serial.println(photoVal); // prints voltage reading
  delay(delayVal); // Just to slow down serial monitor
  
  if (photoVal >= lightVal) {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
  } else {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
  }
}
