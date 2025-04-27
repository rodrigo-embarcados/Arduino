#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String mensagem1 = "Este eh um displa";
String mensagem2 = "y 16x2 ligado a ";
String mensagem3 = "um Arduino Nano ";
String mensagem4 = "pela interface ";
String mensagem5 = "i2c!";
String mensagem6 = "Arduino Nano!";
int velocidadeVarredura = 100;

void centralizarMensagem(String mensagem, int linha)
{
  int inicio = (16 - mensagem.length()) / 2;
  lcd.setCursor(inicio, linha);
  lcd.print(mensagem);
}

void setup()
{
  Wire.begin();
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  centralizarMensagem(mensagem6, 1);
}
void loop()
{
    lcd.setCursor(0 ,0);
    lcd.print("                ");
    lcd.setCursor(15 ,0);
    lcd.print(mensagem1);
    lcd.scrollDisplayLeft();
    lcd.print(mensagem2);
    lcd.scrollDisplayLeft();
    lcd.print(mensagem3);
    lcd.scrollDisplayLeft();
    lcd.print(mensagem4);
    lcd.scrollDisplayLeft();
    lcd.print(mensagem5);
    lcd.scrollDisplayLeft();
}
