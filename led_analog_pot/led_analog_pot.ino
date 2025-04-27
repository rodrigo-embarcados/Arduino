#define LED_R 11
#define LED_Y 10
#define LED_B 9
#define P_SENSOR A0

byte b = 0;
unsigned int value;

void b_leds();

void setup()
{
  pinMode(LED_R, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_B, OUTPUT);
  b_leds();
}

void loop()
{
  value = analogRead(P_SENSOR);
  b = map(value, 0, 1023, 0, 255);
  b_leds();
}

void b_leds()
{
  analogWrite(LED_R, b);
  analogWrite(LED_Y, b);
  analogWrite(LED_B, b);
}
