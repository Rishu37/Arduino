int led = 3;
int pot = A0;
int potValue = 0;
int ledBrightness = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(pot);

  ledBrightness = map(potValue, 0 ,1023, 0,255);
  analogWrite(led, ledBrightness);
  delay(10);

}
