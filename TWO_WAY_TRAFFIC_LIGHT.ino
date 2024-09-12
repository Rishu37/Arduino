int r1 = 2;    
int b1 = 3; 
int g1 = 4;  
int r2 = 5;    
int b2 = 6; 
int g2 = 7;  

void setup() {
  
  pinMode(r1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(g2, OUTPUT);

  
  digitalWrite(g1, HIGH);
  digitalWrite(b1, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(r2, HIGH);
}

void loop() {
  
  digitalWrite(g1, HIGH);
  digitalWrite(b1, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(r2, HIGH);
  delay(5000); 

  
  digitalWrite(g1, LOW);
  digitalWrite(b1, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(r2, LOW);
  delay(2000); 

  
  digitalWrite(g1, LOW);
  digitalWrite(b1, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(g2, HIGH);
  digitalWrite(b2, LOW);
  digitalWrite(r2, LOW);
  delay(5000); 

 
  digitalWrite(g1, LOW);
  digitalWrite(b1, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(b2, HIGH);
  digitalWrite(r2, LOW);
  delay(2000); 
}
