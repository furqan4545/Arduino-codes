
int latchpin = 11; 
int clockpin = 9;
int datapin = 12;

unsigned int d;

byte LEDs = 0b00000001;


// bring latch pin down --> STCP is the latch pin
// send data  on DS pin i.e. data pin
// and then bring latch pin high

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  d=2048;
  
  pinMode(latchpin,OUTPUT);
  pinMode(datapin,OUTPUT);
  pinMode(clockpin,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchpin, LOW);
  shiftOut(datapin, clockpin, MSBFIRST, (0xff00 & d)>>8);
  shiftOut(datapin, clockpin, MSBFIRST, 0x00ff & d);
  digitalWrite(latchpin, HIGH);  
}
