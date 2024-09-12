// Define L298N Motor Driver Pins (without enable pins)
int in1 = 7;  // IN1 for Motor A
int in2 = 8;  // IN2 for Motor A

int in3 = 5;  // IN3 for Motor B
int in4 = 6;  // IN4 for Motor B

void setup() {
  // Set all the motor control pins to output
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Set both motors to run forward at full speed
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);  // Motor A forward
  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);  // Motor B forward
}

void loop() {
  // Do nothing, keep motors running at full power
}
