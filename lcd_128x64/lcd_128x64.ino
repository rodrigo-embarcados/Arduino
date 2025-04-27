#include <Arduino.h>
#include <U8g2lib.h>

// Inicializa o display ST7920 no modo SPI
U8G2_ST7920_128X64_F_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data=*/ 11, /* cs=*/ 10, /* reset=*/ U8X8_PIN_NONE);

void setup() {
    u8g2.begin();
}

void loop() {
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.drawStr(20, 30, "Hello, World!");
    u8g2.sendBuffer();
    delay(1000);
}
