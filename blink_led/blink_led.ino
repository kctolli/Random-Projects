const int GREEN = 2;
const int BLUE  = 3;
const int RED   = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN, OUTPUT);       
  pinMode(BLUE, OUTPUT); 
  pinMode(RED, OUTPUT); 
  low();
}

void loop() {
  // put your main code here, to run repeatedly:
  high(GREEN);
  low();
  high(BLUE);
  low();
  high(RED);
  low();
}

void low(){
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
  delay(100);
}

void high(int pin){
  digitalWrite(pin, HIGH);
  delay(5000);
}
