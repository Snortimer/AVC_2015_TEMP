/**
 * Arduiono code for TGD Autonomous Vehicle
 *
 * Authors: TGD AVC committee
 *
 * License: CC Share/Share-alike
 */
 
#include "TGD_Movement.h"

void setup() {
  // put your setup code here, to run once:
  init_movement();
  
  pinMode(forwardPin, INPUT);
  delay(1000);
  pinMode(forwardPin, OUTPUT);
  delay(500);
  pinMode(backPin, INPUT);
  delay(1000);
  pinMode(backPin, OUTPUT);
  delay(500);
  pinMode(leftPin, INPUT);
  pinMode(forwardPin, INPUT);
  delay(750);
  pinMode(forwardPin, OUTPUT);
  delay(500);
  pinMode(backPin, INPUT);
  delay(750);
  pinMode(backPin, OUTPUT);
  pinMode(leftPin, OUTPUT);
  delay(500);
  pinMode(rightPin, INPUT);
  pinMode(forwardPin, INPUT);
  delay(750);
  pinMode(forwardPin, OUTPUT);
  delay(500);
  pinMode(backPin, INPUT);
  delay(750);
  pinMode(backPin, OUTPUT);
  pinMode(rightPin, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
