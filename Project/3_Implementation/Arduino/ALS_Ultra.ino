const int trigpin=9;
const int echopin=10;
const int ledpin=13;
const int ldrpin=A0;
long duration;
int distance;
int safedistance;

void setup() 
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);
 
}

void loop() 
{
  Serial.begin(9600);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  safedistance=distance;
  int light=analogRead(ldrpin);
  if(light<=400)
  {
    if(safedistance<=50)
    {
      digitalWrite(ledpin,HIGH);
    }
    else if (safedistance>50)
          {
            digitalWrite(ledpin,LOW);
          }
  }
  else if(light>400)
  {
      digitalWrite(ledpin,LOW);
  }
}  
   
