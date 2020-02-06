
/* Mr6 paddle shifter code 1/13/13 */

const int fore =  2; 
const int back =  3; 
const int left =  4; 
const int right =  5; 
 

int leftPin = A0;
int rightPin = A0;
int reversePin = A0;
int neutralPin = A0;
int tap = 0;


int gear =  0;

void setup() {
  // set the digital pin as output:
pinMode(fore, OUTPUT);   
pinMode(back, OUTPUT); 
pinMode(left, OUTPUT); 
pinMode(right, OUTPUT); 
 

digitalWrite(fore, LOW);
digitalWrite(back, LOW);
digitalWrite(left, LOW);
digitalWrite(right, LOW);

}


void loop()
{
tap = analogRead(leftPin);
;

    if (tap > 700)
    {
      
      switch (gear) {
    case -1:
      //do nothing
      break;
      
    case 0:
      //do nothing
      break;
      
    case 1:
      //do nothing
      break;
      
    case 2:
      //downshift to gear 1
      digitalWrite(back, LOW);
      
      digitalWrite(fore, HIGH);
      delay(500);
      gear =  1;
      break;
      
    case 3:
      //downshift to gear 2
      digitalWrite(fore, LOW);
      delay(100);
      digitalWrite(left, HIGH);
      delay(100);
      digitalWrite(back, HIGH);
      delay(500);
      gear =  2;
      break;
      
    case 4:
      //downshift to gear 3
      digitalWrite(back, LOW);
      
      digitalWrite(fore, HIGH);
      delay(500);
      gear =  3;
      break;
      
    case 5:
      //downshift to gear 4
      digitalWrite(fore, LOW);
      delay(100);
      digitalWrite(right, LOW);
      delay(100);
      digitalWrite(back, HIGH);
      delay(500);
      gear =  4;
      break;
      
      }
    }
      
      
    if (tap < 300)
    {
    
      switch (gear) {
    case -1:
      //upshift to gear 0
      digitalWrite(back, LOW);
      delay(100);
      digitalWrite(right, LOW);
      delay(500);
      gear =  0;
      break;
      
    case 0:
      //upshift to gear 1
      digitalWrite(left, HIGH);
      delay(100);
      digitalWrite(fore, HIGH);
      delay(500);
      gear =  1;
      break;
      
    case 1:
      //upshift to gear 2
      digitalWrite(fore, LOW);
      
      digitalWrite(back, HIGH);
      delay(500);
      gear =  2;
      break;
      
    case 2:
      //upshift to gear 3
      digitalWrite(back, LOW);
      delay(100);
      digitalWrite(left, LOW);
      delay(100);
      digitalWrite(fore, HIGH);
      delay(500);
      gear =  3;
      break;
      
    case 3:
      //upshift to gear 4
      digitalWrite(fore, LOW);
      
      digitalWrite(back, HIGH);
      delay(500);
      gear =  4;
      break;
      
    case 4:
      //upshift to gear 5
      digitalWrite(back, LOW);
      delay(100);
      digitalWrite(right, HIGH);
      delay(100);
      digitalWrite(fore, HIGH);
      delay(500);
      gear =  5;
      break;
      
    case 5:
      //do nothing
      break;
      
      }
    }
   /*
    if (reverse_tap > 500)
    {
      
      switch (gear) {
    case -1:
     //do nothing
      break;
      
    case 0:
      //shift into reverse
      digitalWrite(back, HIGH);
      gear =  -1;
      break;
      
    case 1:
     //do nothing
      break;
    case 2:
      //do nothing
      break;     
    case 3:
    //do nothing
      break;   
    case 4:
      //do nothing
      break;     
    case 5:
      //do nothing
      break;
      
      }
      
    }
    
    
    
    
    if (neutral_tap > 500)
    {
      
     digitalWrite(gear1, LOW);
     digitalWrite(gear2, LOW);
     digitalWrite(gear3, LOW);
     digitalWrite(gear4, LOW);
     digitalWrite(gear5, LOW);
     digitalWrite(gearR, LOW); 
     gear = 0;
     
    }
    
*/    
  }
