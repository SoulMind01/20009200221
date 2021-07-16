void setup()
{
  for(int i=7;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  for(int i=7;i<=13;i++)
  {
    digitalWrite(i,HIGH);
  }
  Serial.begin(9600);
}
void loop()
{
  int i=0;
  while(Serial.available()>0)
  {
    i=Serial.read()-48;
    Serial.println(i);
    if(i==1)
    {
      l(2);l(3);
      delay(500);
      u(2);u(3);
    }
    else if(i==2)
    {
      l(1);l(2);l(7);l(5);l(4);
      delay(500);
      u(1);u(2);u(7);u(5);u(4);
    }
    else if(i==3)
    {
      l(1);l(2);l(3);l(4);l(7);
      delay(500);
      u(1);u(2);u(3);u(4);u(7);
    }
    else if(i==4)
    {
      l(3);l(2);l(6);l(7);
      delay(500);
      u(3);u(2);u(6);u(7);
    }
    else if(i==5)
    {
      l(1);l(6);l(7);l(3);l(4);
      delay(500);
      u(1);u(6);u(7);u(3);u(4);
    }
    else if(i==6)
    {
      l(1);l(3);l(4);l(5);l(6);l(7);
      delay(500);
      u(1);u(3);u(4);u(5);u(6);u(7);
    }
    else if(i==7)
    {
      l(1);l(2);l(3);
      delay(500);
      u(1);u(2);u(3);
    }
    else if(i==8)
    {
      l(1);l(2);l(3);l(4);l(5);l(6);l(7);
      delay(500);
      u(1);u(2);u(3);u(4);u(5);u(6);u(7);
    }
    else if(i==9)
    {
      l(1);l(2);l(3);l(4);l(6);l(7);
      delay(500);
      u(1);u(2);u(3);u(4);u(6);u(7);
    }
    else
    {
      l(1);l(2);l(3);l(4);l(5);l(6);
      delay(500);
      u(1);u(2);u(3);u(4);u(5);u(6);
    }
  }
}
void l(int i)
{
    digitalWrite(i+6,LOW);
}
void u(int i)
{
  digitalWrite(i+6,HIGH);
}
