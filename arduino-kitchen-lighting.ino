
const int  buttonPin = 7; 
const int ledPin = 13;    
int buttonPushCounter = 1;
int buttonState = 0;      
int lastButtonState = 0;  


void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    
    if (buttonState == HIGH) {
   
      buttonPushCounter++;
      Serial.println("Lights On");
      Serial.print("number of button pushes:  ");
      Serial.println(buttonPushCounter);
    } else {
   
      Serial.println("Lights Off");
    }
 
    delay(100);  // debounce
  }
  lastButtonState = buttonState;

  // Turn the lights on/off with every button push
  if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

