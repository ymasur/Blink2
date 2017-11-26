#include <Arduino.h>

/*
  Blink 2 (modele sans toto)
  in a ramp counter with a limit of 32 steps,
  Turns on an LED on for a duration of the step, then off for the rest.
  This make a progressive intensity of ligth.
  This example code is in the public domain.
 */
int d;
void setup()
{
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(BUILD_IN, OUTPUT);
 d = 0 ;
}

void loop()
{
  d++;
  d&=0x1f;
  digitalWrite(BUILD_IN, HIGH);   // set the LED on
  delay(d);              // wait for a step long
  digitalWrite(BUILD_IN, LOW);    // set the LED off
  delay(0x1f-d);              // wait for the rest
}
