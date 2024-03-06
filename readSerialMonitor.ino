int blinkNumber;
int bodRate = 9600;
String msg = "How many blinks do you want ? Enter a number";
String msg2 = "Your number is : ";
int ledPin = 12;

void setup() {
  digitalWrite(ledPin, LOW);

  // put your setup code here, to run once:
  Serial.begin(bodRate);
  pinMode(12, OUTPUT);
}

int blinkingFunction(int b) {
  for (int i = 0; i < b; i++) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
    //Create a waiting time area for the user to enter a value
  }
  blinkNumber = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(blinkNumber);
  delay(400);
  blinkingFunction(blinkNumber);
}
