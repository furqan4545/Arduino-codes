int a3 = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(a3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 100; i+=5) {
    analogWrite(a3, i);
    delay(50);
  }
  delay(10000);
//  
  for (int i =100; i >= 0; i=-5) {
    analogWrite(a3, i);
    delay(50);
  }
  delay(10000);
 
//  digitalWrite(a3, LOW);
}
