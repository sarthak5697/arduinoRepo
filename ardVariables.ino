
int voltPin = 13;
float pi = 3.14;
int small = 170;
int high = 500;
int letterBreak = 700;


void setup() {
  // put your setup code here, to run once:
  pinMode(voltPin, OUTPUT);
}

void loop() {
  //MORSECODE FOR HELLO WORLD
  delay(letterBreak);
  //H
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);

  delay(letterBreak);

  //E

  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);


  // L
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);

  // L
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);

  // 0
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  delay(letterBreak);

  // W
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);

  delay(letterBreak);


  // 0
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  delay(letterBreak);

  // R
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);

  // L
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);

   // D
  digitalWrite(voltPin, HIGH);
  delay(high);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(small);
  digitalWrite(voltPin, HIGH);
  delay(small);
  digitalWrite(voltPin, LOW);
  delay(letterBreak);


  delay(1000);
}
