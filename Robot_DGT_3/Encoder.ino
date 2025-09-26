#define ENCODER_PIN 23

void Encoder_setup() {
  pinMode(ENCODER_PIN, INPUT_PULLUP);
  lastState = digitalRead(INPUT_PULLUP);
}

void Encoder_run() {
  int currentState = digitalRead(ENCODER_PIN);
  if (currentState != lastState) {
    stateCount++;
    lastState = currentState;
  }
  
}
