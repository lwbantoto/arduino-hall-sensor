const int hallPin = 12; //hall sensor connected to pin 12

const int LED = 2;


int hallValue = 0;

void setup()
{
  pinMode (hallPin, INPUT);
  pinMode (LED, OUTPUT);
  Serial.begin (9600);
  
}

void loop()
{
  static int counter = 0;
  //hallValue = digitalRead (hallPin);
  
 if (hallValue > 0)
  {
    digitalWrite (2, HIGH);
   
    if (counter % 1000 == 0)  Serial.println ("on");
 
  }
  else
  {
    digitalWrite (2, LOW);
    if (counter % 1000 == 0)  Serial.println ("off");
  }
  
  delay(0.1);
  
  counter++;
  
}


