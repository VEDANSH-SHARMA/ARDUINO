
int x=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
String msg="";
if(Serial.available()>0)
{
  while(Serial.available()>0)
  {
    msg +=char(Serial.read());
    x =x+1;
  }
Serial.println(msg);
}
Serial.println(x);
delay(2000);
x=0;
}
