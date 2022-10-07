/*
  // C++ code
//

int hum = 0;
const int PIN_ONE = 4;
const int PIN_TWO = 5;
const int PIN_THREE = 6;
const int PIN_FOUR = 7;
const int PIN_FIVE = 8;
const int PIEZO_BUZZ_PIN = 3;



/*int myLEDs[5] = {4,5,6,7,8};
bool btnState = false;
int BTN_PIN = 2; lo intente asi no me funciona no se como me estrese*/


  /*
void setup()
{
 
  
pinMode(PIN_ONE, OUTPUT);
  pinMode(PIN_TWO, OUTPUT);
  pinMode(PIN_THREE, OUTPUT);
  pinMode(PIN_FOUR, OUTPUT);
  pinMode(PIN_FIVE, OUTPUT);
  pinMode(PIEZO_BUZZ_PIN, OUTPUT);
  
  Serial.begin(9600); 
}

void loop()
{
  hum = analogRead(A0);
  Serial.println(hum);
  
   for (int x=4; x<=8; x++)
  {
  digitalWrite(x, LOW);
  }  
  
  if (hum < 200)
  {
    digitalWrite(4, HIGH);
  } 
  
  else {
    if (hum < 400) 
    {
      digitalWrite(5, HIGH);
    } 
    else {
      if (hum < 600)
      {
        digitalWrite(-6, HIGH);
      } 
      else {
        if (hum < 800) 
        {
          digitalWrite(7, HIGH);
        } 
        else {
          digitalWrite(8, HIGH);
        }
      }
    }
  }
  delay(100);
  
  /*digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/


// NOGH PROFE pere solo hago los bombillos


  int hum = 0; 

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600); 
  
}

void loop()
{
 
  hum = analogRead(A0); 
  Serial.println(hum); 
  
  
  for (int x=4; x<=8; x++)
  {
  digitalWrite(x, LOW);
  }  
  
 
  if (hum < 200)
  {
    digitalWrite(8, HIGH);
  } 
  
  else {
    if (hum < 400) 
    {
      digitalWrite(7, HIGH);
    } 
    else {
      if (hum < 600)
      {
        digitalWrite(6, HIGH);
      } 
      else {
        if (hum < 800) 
        {
          digitalWrite(5, HIGH);
        } 
        else {
          digitalWrite(4, HIGH);
        }
      }
    }
  }
  delay(100); 
}
