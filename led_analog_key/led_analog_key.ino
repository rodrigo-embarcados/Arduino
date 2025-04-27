#define LED_R 11
#define LED_Y 10
#define LED_B 9
#define KEY 8

byte b = 0; // byte é um alias para unsigned char, que tem 8 bits (0 - 255)

void b_leds();

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(KEY, INPUT_PULLUP);
  b_leds();
}

void loop()
{
  if(digitalRead(KEY) == LOW)
  {
     if(b < 255) b += 51;
     else b = 0;
     b_leds();
  }
  delay(100);
}

void b_leds()
{
  analogWrite(LED_R, b);
  analogWrite(LED_Y, b);
  analogWrite(LED_B, b);
}
