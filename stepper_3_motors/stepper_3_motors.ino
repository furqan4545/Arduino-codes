// defines pins numbers
const int stepPin = 6;
const int dirPin = 7;
const int stepPin2 = 3;
const int dirPin2 = 4;
const int stepPin3 = 3;
const int dirPin3 = 4;

 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  
  pinMode(stepPin2,OUTPUT);
  pinMode(dirPin2,OUTPUT);
  
  pinMode(stepPin3,OUTPUT);
  pinMode(dirPin3,OUTPUT);
  
  digitalWrite(stepPin, LOW);
  digitalWrite(dirPin, LOW);
  
  digitalWrite(stepPin2, LOW);
  digitalWrite(dirPin2, LOW);
  
  digitalWrite(stepPin3, LOW);
  digitalWrite(dirPin3, LOW);
  
}

void loop() {
  digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  digitalWrite(dirPin2,HIGH);
  digitalWrite(dirPin3,HIGH);
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 36000; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin2,HIGH);
    digitalWrite(stepPin3,HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(2000);
    digitalWrite(stepPin2,LOW);
    digitalWrite(stepPin3,LOW);
    delayMicroseconds(1000);
  }
  delay(1000); // One second delay
 
  digitalWrite(dirPin, LOW); //Changes the rotations direction
  digitalWrite(dirPin2, LOW);
  digitalWrite(dirPin3, LOW);
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 36000; x++) {
    digitalWrite(stepPin,HIGH);
    digitalWrite(stepPin2,HIGH);
    digitalWrite(stepPin3,HIGH);
    delayMicroseconds(450);
    digitalWrite(stepPin,LOW);
    digitalWrite(stepPin2,LOW);
    digitalWrite(stepPin3,LOW);
    delayMicroseconds(450);
  }
  delay(1000);
}
