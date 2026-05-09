/*
 * Arduino Uno LED Blinking Example
 * 
 * This sketch blinks the built-in LED on pin 13
 * 
 * To use a different LED, change LED_PIN to your desired pin number
 * 
 * To change blink speed, modify ON_TIME and OFF_TIME values
 */

// LED pin configuration
#include <Arduino.h>
const int LED_PIN = 13;

// Blink timing in milliseconds
const int ON_TIME = 100;   // LED ON duration
const int OFF_TIME =100;  // LED OFF duration

void setup() {
  // Initialize LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn LED ON
  digitalWrite(LED_PIN, HIGH);
  delay(ON_TIME);
  
  // Turn LED OFF
  digitalWrite(LED_PIN, LOW);
  delay(OFF_TIME);
}