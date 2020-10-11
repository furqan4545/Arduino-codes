 
#include <Servo.h> 
 
int servoPin = 3;
int ifread;

Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin);
  
  pinMode(9, OUTPUT);
   
  Serial.begin(9600);
  pinMode(A1, INPUT);
} 
 
 
void loop() 
{

  ifread = analogRead(A1);
  Serial.println(ifread);
  delay(600);
  
  if (ifread > 8) {
    tone(2, 1000);
    servo.write(0);
    digitalWrite(9, LOW);
  }
  else {
    noTone(2);
    servo.write(100);
    digitalWrite(9, HIGH);
  }
//   servo.write(0);
//   delay(1000);
//   servo.write(100);
//   delay(1000);
   
  
  
 
  
} 
