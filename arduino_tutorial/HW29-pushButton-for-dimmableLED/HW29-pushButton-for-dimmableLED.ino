//Pins for components
int redLedPin = 6;
int increaseButton = 9;
int decreaseButton = 10;
int ledVal;
int buzzerPin = 4;

//Variables for holding current button readings
int increaseButtonVal;
int decreaseButtonVal;

void setup() {
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
  pinMode(increaseButton, INPUT);
  pinMode(decreaseButton, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

increaseButtonVal = digitalRead(increaseButton);
decreaseButtonVal = digitalRead(decreaseButton);

//First checks if the increase button was pressed
//Next, checks if adding would pass the 255 threshold
//If is doesn't, it adds to the LED button value

  if (increaseButtonVal == 0) {
    if ((ledVal + 15) <= 255) {
         ledVal = ledVal + 15;
    }
  }
  
//First checks if the decrease button was pressed
//Next, checks if subtracting would pass the 0 threshold
//If is doesn't, it subtracts to the LED button value
  
  if (decreaseButtonVal == 0) {
    if ((ledVal - 15) >= 0) {
         ledVal = ledVal - 15;
    }
  }
    
  //Writes new ledValue to the LED
  analogWrite(redLedPin, ledVal);

  // Buzzer goes off if the led hits 255
  if (ledVal == 255) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }

}
