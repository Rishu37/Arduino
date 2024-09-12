int trig =9;
int echo =10;
int led = 13;
int duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig, LOW);
  delay(10);

  digitalWrite(trig, HIGH);
  delay(20);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo,HIGH);

  distance = duration*0.034/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  if (distance <= 20){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(1000);

}
