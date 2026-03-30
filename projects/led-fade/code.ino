int redPin=9;
int bright1=255;
int bright2=150;
int bright3=50;
int bright4=10;
int bright5=0;
int wait=1000;
void setup() {
  // put your setup code here, to run once:

pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,bright1);
  delay(wait);

  analogWrite(redPin,bright2);
  delay(wait);

  analogWrite(redPin,bright3);
  delay(wait);

  analogWrite(redPin,bright4);
  delay(wait);

  analogWrite(redPin,bright5);
  delay(wait);

   
}
