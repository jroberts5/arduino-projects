
int redPin = 4;
int greenPin = 5;
int bluePin = 6;
int colorDelay = 300;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


    // Red
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);

     delay(colorDelay);

    // green
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);


      delay(colorDelay);


    //blue
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);

        delay(colorDelay);

      // cyan
   
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 255);


      delay(colorDelay);

    //magenta
      analogWrite(redPin, 255);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 255);
      
      delay(colorDelay);

     //yellow
      analogWrite(redPin, 255);
      analogWrite(greenPin, 255);
      analogWrite(bluePin, 0);

      delay(colorDelay);


      //orange
      analogWrite(redPin, 255);
      analogWrite(greenPin, 165);
      analogWrite(bluePin, 0);

      delay(colorDelay);

      // off
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);

      delay(colorDelay);

      //fuchsia
      analogWrite(redPin, 255);
      analogWrite(greenPin, 0);
      analogWrite(bluePin, 255);
      delay(colorDelay);
}
