int LedPin = 13;
char val = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LedPin, OUTPUT);
}

// Read Value from serial and set a led high or low
void loop () {
  if (Serial.available() > 0) {
    String s = Serial.readStringUntil('\n');
    s.trim();
    Serial.println(s);
    
    if (s.equals("low")) {
      Serial.println("low");
      digitalWrite(LedPin,LOW);
    }
  
    if (s.equals("high")) {
      Serial.println("High");
      digitalWrite(LedPin,HIGH);
    }       
  }
}