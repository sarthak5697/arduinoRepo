
int voltPin = 11;
int voltPin2 = 10;
int max = 255;
int min = 0;
int var = 0;

void setup() {
  pinMode(voltPin, OUTPUT);
  pinMode(voltPin2, OUTPUT);
}

void loop() {
  for (var = 0; var <= max; var++) {
    analogWrite(voltPin2, var);

    delay(30);
  }
  delay(500);


  for (var = 0; var <= max; var++) {
    analogWrite(voltPin, var);

    analogWrite(voltPin2, max - var);  // Inverse intensity for voltPin2

    delay(30);
  }
  delay(500);

  for (var = max; var >= 0; var--) {
    analogWrite(voltPin2, max - var);  // Inverse intensity for voltPin2

    analogWrite(voltPin, var);
    delay(30);
  }
  delay(500);

  for (var = max; var >= 0; var--) {
    analogWrite(voltPin2, var);  // Inverse intensity for voltPin2
    delay(30);
  }

  delay(5000);  // Optional delay if you want a pause between cycles
}
