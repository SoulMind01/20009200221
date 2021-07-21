int tick=0;
int x1=0,x2=0;
void setup()
{
  for(int i=4;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(2,INPUT);
  attachInterrupt(digitalPinToInterrupt(2),func, CHANGE);
}
void loop()
{
  for(tick=0;tick<=99;tick++)
  { 	func();
  }
}
void func()
{
  if(x1!=x2)
  {
    x1=x2=tick=0;
  }
  x1++;
  int num1=tick/10,num2=tick%10;
  show1(num1);show2(num2);
  delay(1000);
  x2++;
  unshow1(num1);unshow2(num2);
}
void unshow1(int x)
{
  if(x==1)
  {
    u(4);
  }
  else if(x==2)
  {
    u(5);
  }
  else if(x==3)
  {
    u(4);u(5);
  }
  else if(x==4)
  {
    u(6);
  }
  else if(x==5)
  {
    u(6);u(4);
  }
  else if(x==6)
  {
    u(6);u(5);
  }
  else if(x==7)
  {
    u(6);u(5);u(4);
  }
  else if(x==8)
  {
    u(7);
  }
  else if(x==9)
  {
    u(7);u(4);
  }
  else
  {
  }
}
void show1(int x)
{
  if(x==1)
  {
    w(4);
  }
  else if(x==2)
  {
    w(5);
  }
  else if(x==3)
  {
    w(4);w(5);
  }
  else if(x==4)
  {
    w(6);
  }
  else if(x==5)
  {
    w(6);w(4);
  }
  else if(x==6)
  {
    w(6);w(5);
  }
  else if(x==7)
  {
    w(6);w(5);w(4);
  }
  else if(x==8)
  {
    w(7);
  }
  else if(x==9)
  {
    w(7);w(4);
  }
  else
  {
  }
}
void unshow2(int x)
{
  if(x==1)
  {
    u(8);
  }
  else if(x==2)
  {
    u(9);
  }
  else if(x==3)
  {
    u(9);u(8);
  }
  else if(x==4)
  {
    u(10);
  }
  else if(x==5)
  {
    u(10);u(8);
  }
  else if(x==6)
  {
    u(10);u(9);
  }
  else if(x==7)
  {
    u(10);u(9);u(8);
  }
  else if(x==8)
  {
    u(11);
  }
  else if(x==9)
  {
    u(11);u(8);
  }
  else
  {
  }
}
void show2(int x)
{
  if(x==1)
  {
    w(8);
  }
  else if(x==2)
  {
    w(9);
  }
  else if(x==3)
  {
    w(9);w(8);
  }
  else if(x==4)
  {
    w(10);
  }
  else if(x==5)
  {
    w(10);w(8);
  }
  else if(x==6)
  {
    w(10);w(9);
  }
  else if(x==7)
  {
    w(10);w(9);w(8);
  }
  else if(x==8)
  {
    w(11);
  }
  else if(x==9)
  {
    w(11);w(8);
  }
  else
  {
  }
}
void w(int x)
{
  digitalWrite(x,HIGH);
}
void u(int x)
{
  digitalWrite(x,LOW);
}
