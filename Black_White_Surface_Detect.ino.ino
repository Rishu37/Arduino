int led = 2;
int ir = 4;
int SensorState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  SensorState = digitalRead(ir);

  if (SensorState == HIGH){
    Serial.println("Black Surface Detected");
    digitalWrite(led,HIGH);
  }
  else{
    Serial.println("White Surface Detected");
    digitalWrite(led,LOW);
  }
  delay(100);

}
