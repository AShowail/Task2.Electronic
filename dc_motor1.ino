
int a = 0, b = 0, c = 0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (b = 0; b <= 255; b += 1) {
    analogWrite(9,b);
    delay(20); 
  }
  for (b = 255; b >= 0; b -= 1) {
    analogWrite(9, b);
    delay(20);
  }
}