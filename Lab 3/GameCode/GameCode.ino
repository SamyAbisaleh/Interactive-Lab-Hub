int timer = 500;           // The higher the number, the slower the timing.
int counter = 0;           // The higher the number, the more times the person got it correct
int buttonPin = 12;       //Button Pin 

void setup() {
  // use a for loop to initialize each pin as an output:
  Serial.begin(9600);
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 2; thisPin < 8; thisPin++) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    winning();
    losing();
    digitalWrite(thisPin, LOW);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = 7; thisPin >= 2; thisPin--) {
    // turn the pin on:
    digitalWrite(thisPin, HIGH);
    delay(timer);
    // turn the pin off:
    if (thisPin == 2){
      break;
    }
    winning();
    losing();
    digitalWrite(thisPin, LOW);
  }

}

void winning(){
  if (digitalRead(buttonPin) == HIGH && digitalRead(2) == HIGH) { // if BOTH the switches read HIGH
    for (int i = 0; i <= 5; i++) {
      digitalWrite(2, LOW);
      delay(100);
      digitalWrite(2,HIGH);
      delay(100);
    }
    timer = timer/1.5;
    counter = counter++;
  }
}

void losing(){
  if (digitalRead(buttonPin) == HIGH && digitalRead(2) == LOW) {
    for (int i = 0; i <= 5; i++) {
      digitalWrite(7, LOW);
      delay(100);
      digitalWrite(7,HIGH);
      delay(100);
    }
    counter = 0;
    timer = 500;
  }
}
