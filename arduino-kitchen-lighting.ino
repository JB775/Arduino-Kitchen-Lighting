
const int  buttonPin = 7; 
const int ledPin1 = 13;
const int ledPin2 = 8; 
const int ledPin3 = 10; 
const int ledPin4 = 12; 
const int ledPin5 = 2; 
int buttonPushCounter = 1;
int buttonActivated = 0;      
int lastButtonActivated = 0;  
int currentbuttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  buttonActivated = digitalRead(buttonPin);

  if (buttonActivated != lastButtonActivated) {
    
    if (buttonActivated == HIGH) {
   
      buttonPushCounter++;
//      Serial.println("Lights On");
      Serial.print("number of button pushes:  ");
      Serial.println(buttonPushCounter-1);
      if (currentbuttonState) {
        Serial.println("Lights Triggered Off");
      } else {
        Serial.println("Lights Triggered On");
      }
    } 
    
    delay(150);  // debounce
  }

  lastButtonActivated = buttonActivated;

  // Turn the lights on/off with every button push
  if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
    currentbuttonState = 1;
    
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    currentbuttonState = 0;
  }

  // Reset push counter so it remains a low number
  if (buttonPushCounter == 5) {
    buttonPushCounter = 1;
    delay(50);  // debounce
  }
}



