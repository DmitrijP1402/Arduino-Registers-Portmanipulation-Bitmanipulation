/********************************************
date:      "06.02.2023"
author:    "DmitrijP1402"
filename:  "4_Button_LED_Uno.ino"
********************************************/

void setup() {
  DDRB = DDRB | B00100000;  //LED as OUTPUT at Pin 13 LED
  DDRD = DDRD & B11111011;  //Button as INPUT at pin 2
}

void loop() {
  bool buttonState = (PIND & (1 << PIND2)) >> PIND2;  //Read the Button

  if (buttonState == HIGH) {  //if Button pressed
    PORTB = B00100000;        //LED HIGH
  }
  else {
    PORTB = B00000000;        //LED LOW
  }
}
