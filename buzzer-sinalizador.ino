int buzzer = 7;

void setup()
{
 pinMode(buzzer, OUTPUT);
}

void loop()
{
	tone(buzzer, 1500);
  	delay(200);
  	noTone(buzzer);
  	tone(buzzer, 2000);
  	delay(200);
}