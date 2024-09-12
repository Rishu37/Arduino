int led = 13;
int button = 2;
int buttonState = 0;
int lastButtonState = 0;
int pressCount = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(button);

  if(buttonState == HIGH && lastButtonState == LOW){
    pressCount++;
    Serial.print("Button Pressed: ");
    Serial.println(pressCount);
    digitalWrite(led, HIGH);
    delay(10);

  }

  else if(buttonState == LOW && lastButtonState == HIGH){
    digitalWrite(led,LOW);
    delay(10);
  }
  lastButtonState = buttonState;


}
