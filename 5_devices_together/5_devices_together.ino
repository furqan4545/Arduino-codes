 
#include <Servo.h> 

// servo pins
const byte servoPin1 = 6;
const byte servoPin2 = 7;
const byte servoPin3 = 8;
const byte servoPin4 = 9;
const byte servoPin5 = 11;

// dc motors pins
const byte dc_motor1 = 2;
const byte dc_motor2 = 3;
const byte dc_motor3 = 4;
const byte dc_motor4 = 5;
const byte dc_motor5 = 12;
//int dc_motor1 = 2;
//int dc_motor2 = 3;
//int dc_motor3 = 4;
//int dc_motor4 = 5;
//int dc_motor5 = 12;


// IR receiver pins
const byte receiver1 = A1;
const byte receiver2 = A2;
const byte receiver3 = A3;
const byte receiver4 = A4;
const byte receiver5 = A5;

byte IRread1;
byte IRread2;
byte IRread3;
byte IRread4;
byte IRread5;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  Serial.begin(9600);
  
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  
  pinMode(dc_motor1, OUTPUT);
  pinMode(dc_motor2, OUTPUT);
  pinMode(dc_motor3, OUTPUT);
  pinMode(dc_motor4, OUTPUT);
  pinMode(dc_motor5, OUTPUT);
   
  pinMode(receiver1, INPUT);
  pinMode(receiver2, INPUT);
  pinMode(receiver3, INPUT);
  pinMode(receiver4, INPUT);
  pinMode(receiver5, INPUT);
}  
 
void loop() 
{

  IRread1 = analogRead(receiver1);
  IRread2 = analogRead(receiver2);
  IRread3 = analogRead(receiver3);
  IRread4 = analogRead(receiver4);
  IRread5 = analogRead(receiver5);
  
  Serial.println("Receiver 1 values: "+ IRread1);
  Serial.println("Receiver 2 values: "+ IRread2);
  Serial.println("Receiver 3 values: "+ IRread3);
  Serial.println("Receiver 4 values: "+ IRread4);
  Serial.println("Receiver 5 values: "+ IRread5);
  
  delay(600);
//  
//  if ((IRread1 > 8) || (IRread2 > 8) || (IRread3 > 8) || (IRread4 > 8) || (IRread5 > 8)) {
//    tone(2, 1000);
//    
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
    servo4.write(0);
    servo5.write(0);
    
//    digitalWrite(dc_motor1, LOW);
//    digitalWrite(dc_motor2, LOW);
//    digitalWrite(dc_motor3, LOW);
//    digitalWrite(dc_motor4, LOW);
//    digitalWrite(dc_motor5, LOW);

    delay(3000);
//  }
//  else {
//    noTone(2);
    
    servo1.write(100);
    servo2.write(100);
    servo3.write(100);
    servo4.write(100);
    servo5.write(100);
    
//    digitalWrite(dc_motor1, HIGH);
//    digitalWrite(dc_motor2, HIGH);
//    digitalWrite(dc_motor3, HIGH);
    digitalWrite(dc_motor4, HIGH);
//    digitalWrite(dc_motor5, HIGH);
    delay(1000);
//  }

}
 
