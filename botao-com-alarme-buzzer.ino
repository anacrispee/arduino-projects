int botao = 7;
int buzzer = 6;
int pressionado = 0;
int ligado = 0;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  pressionado = digitalRead(botao);
  if (pressionado == HIGH) {
    tone(buzzer, 1500);
    delay(200);
    noTone(buzzer);
    tone(buzzer, 2000);
    delay(200); }
  else {
    noTone(buzzer); }
}