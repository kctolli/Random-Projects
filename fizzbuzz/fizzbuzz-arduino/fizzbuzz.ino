#define Fizz 12
#define Buzz 11

int i = 1;

void setup() {
  Serial.begin(9600); 
  output(); 
}

void loop() {
  fizz();
  buzz();
  low();
}

void low() {
  delay(1000);
  digitalWrite(Fizz, LOW);
  digitalWrite(Buzz, LOW); 
  i++;
  Serial.print("\n");
  Serial.print(i);
}

void buzz() {
  if (i % 5 == 0) {
    digitalWrite(Buzz, HIGH);
    Serial.print(" Buzz");
  }
}

void fizz() {
  if (i % 3 == 0) {
    digitalWrite(Fizz, HIGH);
    Serial.print(" Fizz");
  } 
}

void output() {
  pinMode(Fizz, OUTPUT);  
  pinMode(Buzz, OUTPUT); 
  Serial.print(i); 
}
