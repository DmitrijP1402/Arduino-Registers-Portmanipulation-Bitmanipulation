void setup() {
	DDRD = DDRD | B10000000; //LED as OUTPUT at Pin 38 LED Mega 2560
  DDRE = DDRE & B11101111; //Button as INPUT at pin 2 Mega 2560
}

void loop() {
  byte buttonState = (PINE & (1 << PINE4)) >> PINE4; //Read the Button

  if (buttonState == HIGH){ 
    PORTD = B10000000; //LED HIGH
  } 
  else {
    PORTD = B00000000; //LED LOW
  }
}
