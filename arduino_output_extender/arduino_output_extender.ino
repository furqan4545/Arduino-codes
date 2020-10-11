
int latchpin = 11; 
int clockpin = 9;
int datapin = 12;
//byte LEDs = 0b10101010;
//byte LEDs = B00000011;
//byte LEDs = 0b10101010;

byte LEDs = 0b10000000;


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
  shiftOut(datapin, clockpin, LSBFIRST, LEDs);
  digitalWrite(latchpin, HIGH);  
}
