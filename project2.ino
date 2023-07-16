// C++ code
//
int button=2;
int red=3;
int green=4;
int yellow=5;
int reading=0;
int counter=0;
void setup()
{
pinMode(button,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);
}

void loop()
{  reading=digitalRead(button);
if(reading==HIGH)
{counter++;
if (counter>4)
{counter=0;}
}
if (counter==1)
{
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(40);
}
  else if(counter==2)
{digitalWrite(red,HIGH);
digitalWrite(green,HIGH);
 digitalWrite(yellow,LOW);
 delay(40);
}
else if (counter==3)
{
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,HIGH);
delay(40);}
else if (counter==4)
{
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
  delay(40);
}
}

