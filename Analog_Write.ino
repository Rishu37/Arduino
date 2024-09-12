const int ledPins[] = {3, 5, 6, 9}; // Array of LED pins
const int numLeds = 4; // Number of LEDs

void setup() {
  // Initialize each LED pin as an output
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Sequentially fade LEDs in and out
  for (int i = 0; i < numLeds; i++) {
    // Fade in
    for (int fade = 0; fade <= 255; fade += 5) {
      analogWrite(ledPins[i], fade);
      delay(30);
    }
    
    // Fade out
    for (int fade = 255; fade >= 0; fade -= 5) {
      analogWrite(ledPins[i], fade);
      delay(30);
    }
  }
}
