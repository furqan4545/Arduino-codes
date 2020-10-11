
//int latchpin = 11; 
//int clockpin = 9;
//int datapin = 12;
////byte LEDs = 0b10101010;
////byte LEDs = B00000011;
////byte LEDs = 0b10101010;
//
//byte LEDs = 0b00000001;
//
//
//// bring latch pin down --> STCP is the latch pin
//// send data  on DS pin i.e. data pin
//// and then bring latch pin high
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(9600);
//  pinMode(latchpin,OUTPUT);
//  pinMode(datapin,OUTPUT);
//  pinMode(clockpin,OUTPUT);
//}
//
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  digitalWrite(latchpin, LOW);
//  shiftOut(datapin, clockpin, LSBFIRST, LEDs);
//  digitalWrite(latchpin, HIGH);  
//}





int latchpin = 11; 
int clockpin = 9;
int datapin = 12;

byte LED1s = 0b01010101;
byte LED2s = 0b10101010;


// bring latch pin down --> STCP is the latch pin
// send data  on DS pin i.e. data pin
// and then bring latch pin high

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchpin,OUTPUT);
  pinMode(datapin,OUTPUT);
  pinMode(clockpin,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, LED1s);
  digitalWrite(latchpin, HIGH);
  delay(200);

  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, LSBFIRST, LED2s);
  digitalWrite(latchpin, HIGH);
  delay(200);
}
