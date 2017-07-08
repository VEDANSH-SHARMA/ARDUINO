int y=60;
int x=50;
int z=32;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println(x);
Serial.write(x);
delay(1000);
Serial.write(z);
delay(1000);

Serial.write(y);
delay(1000);
}
