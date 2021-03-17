#include "pitches.h"
#include "pins.h"
 
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

void setup() {
  Serial.begin(9600); // initialize serial
  // set arduino pin to input pull-up mode
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  // set arduino pin to output mode
  pinMode(BUZZER_PIN, OUTPUT);       
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
  button();
}

void button() {
  int buttonState = digitalRead(BUTTON_PIN); // read new state
  
  if (buttonState == LOW) { // button is pressed
    Serial.println("The button is being pressed");
    buzzer();
  } else {
    Serial.println("The button is not pressed"); 
    digitalWrite(LED_PIN, LOW);
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
    digitalWrite(LED_PIN, HIGH);
    
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
