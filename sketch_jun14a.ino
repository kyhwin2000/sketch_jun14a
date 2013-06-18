const int aButton = 1;          // input pin for pushbutton
const int bButton = 2;
int previousAstate = HIGH;   // for checking the state of a pushButton
int previousBstate = HIGH;

void setup() {
  // make the pushButton pin an input:
  pinMode(aButton, INPUT);
  pinMode(bButton, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  int aState = digitalRead(aButton);
  int bState = digitalRead(bButton);
  if ((aState != previousAstate) && (aState == HIGH)) {
    Keyboard.print("a");
  }
  if ((bState != previousBstate) && (bState == HIGH)) {
    Keyboard.print("b");
  }
  previousAstate = aState; 
  previousBstate = bState; 
}


