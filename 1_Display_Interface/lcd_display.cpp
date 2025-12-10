#include "mbed.h"
#include "TextLCD.h"
TextLCD lcd(p15, p16, p17, p18, p19, p20, TextLCD::LCD16x2);
int main() {
    lcd.printf("ARM!\n");
}
