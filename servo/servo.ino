/*
Adafruit Arduino - Lesson 14. Sweep
*/
 
#include <Servo.h> 
 
int servoPin = 9;
 
Servo servo;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin); 
} 
 
 
void loop() 
{

   servo.write(0);
   delay(1000);
   servo.write(100);
   delay(1000);
  // scan from 0 to 180 degrees
//  for(angle = 0; angle < 180; angle++)  
//  {                                  
//    servo.write(angle);               
//    delay(5);                   
//  } 
//  delay(1000);
//  // now scan back from 180 to 0 degrees
//  for(angle = 180; angle > 0; angle--)    
//  {                                
//    servo.write(angle);           
//    delay(5);       
//  } 
//  delay(1000);
} 
