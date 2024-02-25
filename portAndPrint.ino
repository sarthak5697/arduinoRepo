int j = 1;
int waitTime = 750;
int x = 3;
int y = 7;
int z;
String myString = " + ";
float pi = 3.14;
float r = 2;
float area;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  // z = x + y;
  // Serial.print(x);
  // Serial.print(myString);
  // Serial.print(y);
  // Serial.print(" = ");
  // Serial.println(z);
  // Serial.print(myString);
  // Serial.println(j);
  // j = j+1 ;
  area = pi * r * r;
  Serial.print("A Circle With Radius = ");
  Serial.println(r);
  Serial.print("Has an Area = ");
  Serial.println(area);
  delay(waitTime);
  r = r + 5;
}
