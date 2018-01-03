void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int frequency = 0;
  if (Serial.available() > 0)
  {
    frequency = Serial.parseInt();
    tone(3, frequency, 1000);
  }
}

