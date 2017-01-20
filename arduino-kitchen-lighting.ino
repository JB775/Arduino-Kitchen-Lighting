const int buttonPin = 2;
const int ledPin =  13;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    // turn lights on:
    digitalWrite(ledPin, HIGH);
    Serial.print("Lights on.");

  } else {
    // turn lights off:
    digitalWrite(ledPin, LOW);
    Serial.print("Lights off.");
  }
}
