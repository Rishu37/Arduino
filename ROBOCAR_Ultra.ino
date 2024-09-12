const int trig = 3;
const int echo = 2;
const int in1 = 11;
const int in2 = 10;
const int in3 = 9;
const int in4 = 8;
const int ena = 5; 
const int enb = 6; 

void setup() 
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, OUTPUT); 
  pinMode(enb, OUTPUT); 
}

long dura, dis;

void loop()
{     
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);  
  dura = pulseIn(echo, HIGH);
  dis = dura / 58.2;
  
  if(dis < 30)
  {
    
    analogWrite(ena, 100); 
    analogWrite(enb, 100); 
    
    digitalWrite(in1, LOW); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in3, HIGH); 
    digitalWrite(in4, LOW);
    delay(200);
    
    digitalWrite(in1, LOW); 
    digitalWrite(in3, LOW); 
    digitalWrite(in2, HIGH); 
    digitalWrite(in4, LOW);
    delay(500);
  }
  else
  {
    
    analogWrite(ena, 100); 
    analogWrite(enb, 100); 
    
    digitalWrite(in1, HIGH); 
    digitalWrite(in2, LOW); 
    digitalWrite(in4, HIGH); 
    digitalWrite(in3, LOW);
  }  
}
