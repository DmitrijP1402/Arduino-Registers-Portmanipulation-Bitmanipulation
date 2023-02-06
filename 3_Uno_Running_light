void setup () { 
  DDRD = DDRD | B11111111; //Pin 7-0
  DDRB = DDRB | B00111111; //Pin 13-8
}

int time = 200;

void loop () {
  effectOne();
  effectTwo();
  effectThree();
  effectFour();
  effectFive();
  effectSix();
  effectSeven();
  effectEight();
}  

void effectOne () {
  PORTB = B00111111;
  PORTD = B11111111;
  delay(time); 
  
  PORTB = B00000000;
  PORTD = B00000000;
  delay(time); 
}

void effectTwo (){
  PORTD = B11111111;
  PORTB = B00111111;
  
 for( int i= 0; i < 8; i++){
  	PORTD = PORTD << 1;
    delay(time);
 }
  
 for( int i= 0; i < 6; i++){
  	PORTB = PORTB << 1;
    delay(time);
 }
}

void effectThree (){
  PORTD = B11111111;
  PORTB = B00111111;
  
 for( int i= 0; i < 6; i++){
  	PORTB = PORTB >> 1; 
    delay(time);
 }
  
 for( int i= 0; i < 8; i++){
  	PORTD = PORTD >> 1; 
    delay(time);
 }
}

void effectFour (){
 PORTD = B11111111;
 PORTB = B00111111;
  
 for( int i= 0; i < 7; i++){
  if (i ==0){
   	PORTD = PORTD >> 1;
  }
  	PORTD = PORTD >> 1; 
    delay(time);
    PORTB = PORTB << 1;
 }
}

void effectFive (){
 PORTD = B11111111;
 PORTB = B00111111;
   
 for( int i= 0; i < 7; i++){
   if (i ==6){
   	PORTD= PORTD << 1;
   }
   	PORTB = PORTB >> 1;
  	PORTD = PORTD << 1; 
    delay(time);
 }
}

void effectSix (){
  PORTD = B11111111;
  PORTB = B00111111;
  
 for( int i= 0; i < 4; i++){
  	PORTD = PORTD << 2;
    delay(time);
 }
  
 for( int i= 0; i < 3; i++){
  	PORTB = PORTB << 2;
    delay(time);
 }
}

void effectSeven (){
  PORTD = B11111111;
  PORTB = B00111111;
  
 for( int i= 0; i < 3; i++){
  	PORTB = PORTB >> 2; 
    delay(time);
 }
  
 for( int i= 0; i < 4; i++){
  	PORTD = PORTD >> 2; 
    delay(time);
  }
}

int b = 8;
int a = 6;

void effectEight(){

   if (b == 1){
  	PORTD = B10000000;
  	PORTB = B00000000;
  }
  
  if (b == 2){
  	PORTD = B01000000;
  	PORTB = B00000000;
  }
  
   if (b == 3){
  	PORTD = B00100000;
  	PORTB = B00000000;
  }
  
  if (b == 4){
  	PORTD = B00010000;
  	PORTB = B00000000;
  }
  
  if (b == 5){
  	PORTD = B00001000;
  	PORTB = B00000000;
  }
  
  if (b == 6){
  	PORTD = B00000100;
  	PORTB = B00000000;
  }
  
  if (b == 7){
  	PORTD = B00000010;
  	PORTB = B00000000;
  }
  
  if (b == 8){
  	PORTD = B00000001;
  	PORTB = B00000000;
  }
  
  for( int i= 0; i < b; i++){
    delay(time);
  	PORTD = PORTD << 1; 
  }
  
  if (b == 8 || b == 7 || b == 6 || b ==5 || b == 4 || b == 3 || b ==2 || b == 1){
  	PORTB = B00000001;
    b = b - 1;
  }
  
  for(int i =0; i < a; i++){
  	delay(time);
  	PORTB = PORTB << 1;
  }
}
