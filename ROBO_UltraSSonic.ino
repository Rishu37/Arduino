/* Obstacle Avoiding Robot Using Ultrasonic Sensor and Arduino NANO
 *  Circuit Digest(www.procreativehub.com)          Youtube 《Technical Tamizha》
 */

int trigPin = 3;      // trig pin of HC-SR04
int echoPin = 2;      // Echo pin of HC-SR04

int revLeft = 8;      // Reverse motion of Left motor
int fwdLeft = 9;      // Forward motion of Left motor
int revRight = 10;    // Reverse motion of Right motor
int fwdRight = 11;    // Forward motion of Right motor

int ENA = 5;          // Speed control for Left motor
int ENB = 6;          // Speed control for Right motor

long duration, distance;
int motorSpeed = 50; // Set motor speed (0-255)

void setup() {
  
  delay(random(500, 2000));   // Delay for random time
  Serial.begin(9600);
  
  // Set motor pins as output
  pinMode(revLeft, OUTPUT);  
  pinMode(fwdLeft, OUTPUT);
  pinMode(revRight, OUTPUT);
  pinMode(fwdRight, OUTPUT);
  
  // Set ENA and ENB as output (for speed control)
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  // Set trig pin as output and echo pin as input
  pinMode(trigPin, OUTPUT);   
  pinMode(echoPin, INPUT);    
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the time it takes for the pulse to return
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;  // Convert time to distance (in cm)
  
  // If the distance is greater than 30 cm, move forward
  if (distance > 30) {   
    analogWrite(ENA, motorSpeed);  // Set speed of left motor
    analogWrite(ENB, motorSpeed);  // Set speed of right motor
    
    digitalWrite(fwdRight, HIGH);  // Move forward
    digitalWrite(revRight, LOW);
    digitalWrite(fwdLeft, HIGH);
    digitalWrite(revLeft, LOW);
  }
  
  // If the distance is less than 30 cm, stop and reverse
  if (distance < 30) {   
    // Stop the robot
    analogWrite(ENA, 0);  // Stop left motor
    analogWrite(ENB, 0);  // Stop right motor
    digitalWrite(fwdRight, LOW);  
    digitalWrite(revRight, LOW);
    digitalWrite(fwdLeft, LOW);
    digitalWrite(revLeft, LOW);
    delay(500);

    // Move backward for 500ms
    analogWrite(ENA, motorSpeed);  // Set speed of left motor
    analogWrite(ENB, motorSpeed);  // Set speed of right motor
    digitalWrite(fwdRight, LOW);  
    digitalWrite(revRight, HIGH);
    digitalWrite(fwdLeft, LOW);
    digitalWrite(revLeft, HIGH);
    delay(500);

    // Stop again
    analogWrite(ENA, 0);  // Stop left motor
    analogWrite(ENB, 0);  // Stop right motor
    digitalWrite(fwdRight, LOW);  
    digitalWrite(revRight, LOW);
    digitalWrite(fwdLeft, LOW);
    digitalWrite(revLeft, LOW);
    delay(100);

    // Turn right for 500ms
    analogWrite(ENA, motorSpeed);  // Set speed of left motor
    analogWrite(ENB, motorSpeed);  // Set speed of right motor
    digitalWrite(fwdRight, HIGH);  
    digitalWrite(revRight, LOW);
    digitalWrite(fwdLeft, LOW);
    digitalWrite(revLeft, LOW);
    delay(500);
  }
}
