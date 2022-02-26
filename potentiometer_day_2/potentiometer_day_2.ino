int potentiometerPin = A3;
int voltageReading;
float voltageOutput;
int outputDelay = 250;

// led pins
int greenLedPin = 8;
int yellowLedPin = 9;
int redLedPin = 10;

//voltage thresholds
float greenVoltageMax = 3.0;
float yellowVoltageMax = 4.0;

void setup() {
  Serial.begin(9600);
  pinMode(potentiometerPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltageReading = analogRead(potentiometerPin);
  voltageOutput = (5.0/1023.0) * voltageReading;
  Serial.print("Potentiometer Voltage is: ");
  Serial.println(voltageOutput);

// green led
if (voltageOutput < greenVoltageMax) {
  digitalWrite(greenLedPin, HIGH);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, LOW);
}
// yellow led
if (voltageOutput >=  greenVoltageMax && voltageOutput < yellowVoltageMax) {
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, HIGH);
  digitalWrite(redLedPin, LOW);
}
// red led
if (voltageOutput >=  yellowVoltageMax) {
  digitalWrite(greenLedPin, LOW);
  digitalWrite(yellowLedPin, LOW);
  digitalWrite(redLedPin, HIGH);
}

  delay(outputDelay);
}
