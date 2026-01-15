// battery tester
#define oldLED 6 // red
#define okLED 4 // yellow
#define newLED 2 // green
int analogValue = 0;
float voltage = 0;
int ledDelay = 2000;
void setup() 
{
pinMode(newLED, OUTPUT);
pinMode(okLED, OUTPUT);
pinMode(oldLED, OUTPUT);
}

void loop() 
{

analogValue = analogRead(0); // VALUES ARE SETUP TO READ A 1.2V MAX AA BATTERY  
voltage = 0.0048*analogValue;
if ( voltage >= 1.2 )
  {
  digitalWrite(newLED, HIGH);
  delay(ledDelay);
  digitalWrite(newLED, LOW);
  }
else if ( voltage < 1.2 && voltage > 1 )
  {
  digitalWrite(okLED, HIGH);
  delay(ledDelay);
  digitalWrite(okLED, LOW);
  }
else if ( voltage <= 0.8 )
  {
digitalWrite(oldLED, HIGH);
delay(ledDelay);
digitalWrite(oldLED, LOW);
  }
}
