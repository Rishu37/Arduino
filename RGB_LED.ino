int l1 = 2;
int l2 = 3;
int l3 = 4;
int l4 = 5;
int l5 = 6;

void setup(){
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
  pinMode(l5,OUTPUT);
}

void loop(){
  digitalWrite(l1,HIGH);
  delay(100);
  digitalWrite(l2,HIGH);
  delay(100);
  digitalWrite(l3,HIGH);
  delay(100);
  digitalWrite(l4,HIGH);
  delay(100);
  digitalWrite(l5,HIGH);
  delay(100);

  digitalWrite(l1,LOW);
  delay(100);
  digitalWrite(l2,LOW);
  delay(100);
  digitalWrite(l3,LOW);
  delay(100);
  digitalWrite(l4,LOW);
  delay(100);
  digitalWrite(l5,LOW);
  delay(100);
}

