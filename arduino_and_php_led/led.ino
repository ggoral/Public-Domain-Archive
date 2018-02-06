void setup()
{
  Serial.begin(9600);

  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  char k;
  byte d[3] = {0, 0, 0};

  while(Serial.available() >= 0)
  {
    
    k = Serial.read();
    switch(k)
    {
      case '1':
        if(d[0] == 0)
        {
          d[0] = 1;
          digitalWrite(3, HIGH);
        }
        else
        {
          d[0] = 0;
          digitalWrite(3, LOW);
        }
        break;

      case '2':
        if(d[1] == 0)
        {
          d[1] = 1;
          digitalWrite(4, HIGH);
        }
        else
        {
          d[1] = 0;
          digitalWrite(4, LOW);
        }
        break;

      case '3':
        if(d[2] == 0)
        {
          d[2] = 1;
          digitalWrite(5, HIGH);
        }
        else
        {
          d[2] = 0;
          digitalWrite(5, LOW);
        }
        break;
    }
  }
}
