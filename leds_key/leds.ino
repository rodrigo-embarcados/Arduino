#define LED_R 2
#define LED_Y 3
#define LED_B 4
#define SW_R 8
#define SW_Y 9
#define SW_B 10

void setup()
{
    pinMode(LED_R, OUTPUT);
    pinMode(LED_Y, OUTPUT);
    pinMode(LED_B, OUTPUT);
    pinMode(SW_R, INPUT_PULLUP);
    pinMode(SW_Y, INPUT_PULLUP);
    pinMode(SW_B, INPUT_PULLUP);
}

void loop()
{
    if(digitalRead(SW_R) == LOW) digitalWrite(LED_R, HIGH);
    else digitalWrite(LED_R, LOW);
    if(digitalRead(SW_Y) == LOW) digitalWrite(LED_Y, HIGH);
    else digitalWrite(LED_Y, LOW);
    if(digitalRead(SW_B) == LOW) digitalWrite(LED_B, HIGH);
    else digitalWrite(LED_B, LOW);
}
