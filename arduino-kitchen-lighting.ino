const int buttonPin = 3; 
const int ledPin1 = 0;
const int ledPin2 = 1; 
const int ledPin3 = 2; 
const int ledPin4 = 4; 
int buttonPushCounter = 1;
int buttonActivated = 0;      
int lastButtonActivated = 0;  

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  buttonActivated = digitalRead(buttonPin);
  if (buttonActivated != lastButtonActivated) {
    if (buttonActivated == HIGH) {
      buttonPushCounter++;
    } 
    delay(150);
  }

  lastButtonActivated = buttonActivated;

  if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }

  if (buttonPushCounter == 5) {
    buttonPushCounter = 1;
    delay(50);
  }
}
