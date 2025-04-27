#define LED_R 11
#define LED_Y 10
#define LED_B 9
#define d_time 40

void setup()
{
    pinMode(LED_R, OUTPUT);
    pinMode(LED_Y, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

void loop()
{
    for(int i = 0; i <= 255; i+= 5)
    {
        analogWrite(LED_R, i);
        analogWrite(LED_Y, i);
        analogWrite(LED_B, i);
        delay(d_time);
    }
    for(int i = 255; i >= 0; i-= 5)
    {
        analogWrite(LED_R, i);
        analogWrite(LED_Y, i);
        analogWrite(LED_B, i);
        delay(d_time);
    }
}
