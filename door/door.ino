#include "pitches.h"

// Set Pins
const int LED_PIN_ON = 3;  
const int LED_PIN_OFF = 4; 
const int BUTTON_PIN = 7; 
const int BUZZER_PIN = 8; 
const int LED_PIN = 9; 
const int DOOR_SENSOR_PIN = 13; 
 
// notes in the melody:
int melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5
};

// note durations: 4 = quarter note, 8 = eighth note, etc, also called tempo:
int noteDurations[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8,
  2,
  8, 8, 8, 8,
  8, 8, 8, 16, 16,
  8, 8, 8, 8,
  4, 4
};

int buttonState = 0;
int doorState = 0;

void setup() {
  Serial.begin(9600);                // initialize serial
  // set arduino pin to input pull-up mode
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP);
  // set arduino pin to output mode
  pinMode(BUZZER_PIN, OUTPUT);       
  pinMode(LED_PIN, OUTPUT); 
  pinMode(LED_PIN_ON, OUTPUT);
  pinMode(LED_PIN_OFF, OUTPUT); 
}

void loop() {
  door();
  button();
}

void button() {
  buttonState = digitalRead(BUTTON_PIN); // read new state
  
  if (buttonState == LOW) { // button is pressed
    Serial.println("The button is being pressed");
    buzzer();
  } else {
    Serial.println("The button is not pressed"); 
    digitalWrite(LED_PIN, LOW);
  }
}

void door() {
  doorState = digitalRead(DOOR_SENSOR_PIN); // read state

  if (doorState == HIGH) {
    Serial.println("The door is open");
    digitalWrite(LED_PIN_ON, HIGH); // turn on LED
    digitalWrite(LED_PIN_OFF, LOW);  // turn off LED
  } else {
    Serial.println("The door is closed");
    digitalWrite(LED_PIN_ON, LOW);  // turn off LED
    digitalWrite(LED_PIN_OFF, HIGH); // turn on LED
  }
}

void buzzer() {
  // iterate over the notes of the melody:
  int size = sizeof(noteDurations) / sizeof(int);

  for (int thisNote = 0; thisNote < size; thisNote++) {
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);
    digitalWrite(LED_PIN, HIGH); // turn on LED
    
    // Console monitor
    Serial.println(thisNote);
    Serial.println(melody[thisNote]);
    
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BUZZER_PIN);
  }
}
