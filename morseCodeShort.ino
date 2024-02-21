int voltPin = 13;
int letterBreak = 700;

void setup() {
  pinMode(voltPin, OUTPUT);
}

void dot() {
  digitalWrite(voltPin, HIGH);
  delay(170);
  digitalWrite(voltPin, LOW);
  delay(170);
}

void dash() {
  digitalWrite(voltPin, HIGH);
  delay(500);
  digitalWrite(voltPin, LOW);
  delay(170);
}

void letterSpace() {
  delay(170);
}

void wordSpace() {
  delay(1000);
}

void loop() {
  // MORSE CODE FOR HELLO WORLD

  // H
  dot(); dot(); dot(); dot();
  letterSpace();

  // E
  dot();
  letterSpace();

  // L
  dot(); dash(); dot(); dot();
  letterSpace();

  // L
  dot(); dash(); dot(); dot();
  letterSpace();

  // O
  dash(); dash(); dash();
  letterSpace();

  wordSpace();

  // W
  dot(); dash(); dash();
  letterSpace();

  // O
  dash(); dash(); dash();
  letterSpace();

  // R
  dot(); dash(); dot();
  letterSpace();

  // L
  dot(); dash(); dot(); dot();
  letterSpace();

  // D
  dash(); dot(); dot();
  letterSpace();

  wordSpace();
  delay(10000);
}
