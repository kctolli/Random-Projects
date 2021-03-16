/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-door-sensor-led
 */

const int DOOR_SENSOR_PIN  = 13; // Arduino pin connected to the OUTPUT pin of door sensor
const int LED_PIN_ON       = 3;  // Arduino pin connected to LED's pin
const int LED_PIN_OFF      = 4;  // Arduino pin connected to LED's pin

int doorState = 0;

void setup() {
  Serial.begin(9600);                     // initialize serial
  pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP); // set arduino pin to input pull-up mode
  pinMode(LED_PIN_ON, OUTPUT);            // set arduino pin to output mode
  pinMode(LED_PIN_OFF, OUTPUT);           // set arduino pin to output mode
}

void loop() {
  doorState = digitalRead(DOOR_SENSOR_PIN); // read state

  if (doorState == HIGH) {
    Serial.println("The door is open");;
    digitalWrite(LED_PIN_ON, HIGH); // turn on LED
    digitalWrite(LED_PIN_OFF, LOW);  // turn off LED
  } else {
    Serial.println("The door is closed");
    digitalWrite(LED_PIN_ON, LOW);  // turn off LED
    digitalWrite(LED_PIN_OFF, HIGH); // turn on LED
  }
}
