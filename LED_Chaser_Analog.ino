const int ledPins[] = {3, 5, 6, 9};
const int numLeds = 4; 
void setup() {
  
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < numLeds; i++) {
   
    for (int fade = 0; fade <= 255; fade += 5) {
      analogWrite(ledPins[i], fade);
      delay(30);
    }
    
  
    for (int fade = 255; fade >= 0; fade -= 5) {
      analogWrite(ledPins[i], fade);
      delay(30);
    }
  }
}
