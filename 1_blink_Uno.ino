/********************************************
date:      "06.02.2023"
author:    "DmitrijP1402"
filename:  "1_blink_Uno.ino"
********************************************/

void setup() {
  DDRD = DDRD | B11000000; 	//Pin 7 & 6
  DDRB = DDRB | B00100000; 	//Pin 13
}

void loop() {
  PORTD = B11000000;   	// PIN 7 & 6 HIGH
  PORTB = B00100000;  	// Pin 13 HIGH
  delay(1000);		// wait for a second

  PORTD = B00000000; 	// Pin 7 & 6 LOW
  PORTB = B00000000; 	// Pin 13 LOW
  delay(1000);		// wait for a second
}
