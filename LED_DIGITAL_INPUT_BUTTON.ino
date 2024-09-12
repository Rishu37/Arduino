int led = 13;
int button =2;

int buttonState = 0;

void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(button);

  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  delay(100);
}