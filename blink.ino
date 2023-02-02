void setup() {
	DDRD = DDRD | B10001100; //Leds as OUTPUT at Pin 38, 19 & 18 LED Mega 2560
}

void loop() {
	PORTD = B10001100;   //Led at Pin 38,19,18 HIGH
	  delay(1000);    
	PORTD = B00000000; //Leds at Pin 38,19,18 LOW
    delay(1000);  
}
