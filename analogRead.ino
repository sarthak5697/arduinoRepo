int readPin = A3;
int voltage = 0;
int milliseconds = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(readPin);
  Serial.println(voltage);
  delay(milliseconds);
}
