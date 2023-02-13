// C++ code
//
int pinoR = 11;
int pinoB = 10;
int pinoG = 9;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
}

void loop()
{
  /*digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000);*/ // Wait for 1000 millisecond(s)
  analogWrite(pinoB, 255);
  delay(1000);
  analogWrite(pinoB, 0);
  delay(1000);
  analogWrite(pinoG, 255);
  delay(1000);
  analogWrite(pinoG, 0);
  delay(1000);
  analogWrite(pinoR, 255);
  delay(1000);
  analogWrite(pinoR, 0);
}