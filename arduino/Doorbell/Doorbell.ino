/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-button-piezo-buzzer
 * Exercises page: https://lisha.ufsc.br/teaching/esl/exercises/buzzer.html
 */


#include <ezButton.h>
 
const int BUTTON_PIN = 7; // Arduino pin connected to button's pin
const int BUZZER_PIN = 3; // Arduino pin connected to Buzzer's pin

ezButton button(BUTTON_PIN); 

void setup() {
  Serial.begin(9600);                // initialize serial
  pinMode(BUTTON_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(BUZZER_PIN, OUTPUT);       // set arduino pin to output mode
  //button.setDebounceTime(50);        // set debounce time to 50 milliseconds
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state
  //button.loop(); // MUST call the loop() function first

  if (buttonState == LOW) {
    Serial.println("The button is being pressed");
    digitalWrite(BUZZER_PIN, HIGH); // turn on
  }
  else {
  //if (buttonState == HIGH) {
    Serial.println("The button is unpressed");
    digitalWrite(BUZZER_PIN, LOW);  // turn off
  }
}
