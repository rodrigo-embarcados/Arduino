#define LED_R 2
#define LED_Y 3
#define LED_B 4

void setup()
{
    pinMode(LED_R, OUTPUT);
    pinMode(LED_Y, OUTPUT);
    pinMode(LED_B, OUTPUT);
}

void loop()
{
    digitalWrite(LED_R, HIGH);
    delay(500);
    digitalWrite(LED_R, LOW);
    delay(500);
    digitalWrite(LED_Y, HIGH);
    delay(500);
    digitalWrite(LED_Y, LOW);
    delay(500);
    digitalWrite(LED_B, HIGH);
    delay(500);
    digitalWrite(LED_B, LOW);
    delay(500);
}
