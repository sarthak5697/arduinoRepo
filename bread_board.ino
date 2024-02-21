void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // tell which pin you are working with



}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);

}
