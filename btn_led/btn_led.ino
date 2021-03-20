const int GREEN = 2;
const int BLUE  = 3;
const int RED   = 4;
const int BTN   = 8;

int buttonState = 0;
int count_value =0;
//int prestate =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BTN, INPUT_PULLUP);
  pinMode(GREEN, OUTPUT);       
  pinMode(BLUE, OUTPUT); 
  pinMode(RED, OUTPUT); 
  low();
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(BTN); // read new state

  if (buttonState == LOW){
    if (count_value == 0){led(GREEN);}
    else if (count_value == 1){led(BLUE);}
    else if (count_value == 2){led(RED);}
    count_value++;
  }

  if (count_value > 2){count_value == 0;}
}

void low(){
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, LOW);
}

void led(int pin){
  low();
  digitalWrite(pin, HIGH);
}
