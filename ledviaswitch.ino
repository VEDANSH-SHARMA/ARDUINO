int val=0;
int old_val=0;
int state=0;
int button=7;
int led=12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,INPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(button);
if((val==HIGH)&&(old_val=LOW))
{
  state=1-state;
}
old_val=val;
if(state==1)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);

}
Serial.print(val);
delay(10);

}
