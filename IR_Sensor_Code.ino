int sensorPin = 7;
int ledPin = 9;   // built-in LED

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == LOW) {   
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }
}