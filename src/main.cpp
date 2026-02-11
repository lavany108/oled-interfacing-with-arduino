#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDR 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);
void setup() {
// write your initialization code here
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC,OLED_ADDR)) {
        Serial.println("OLED not found");\
        while (true);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0,0);
    display.println("Arduino Uno R4");
    display.println("OLED with I2C");
    display.print("Hello World");
    display.display();
}

/**
 * @file main.cpp
 * @brief Example Arduino sketch that initializes an SSD1306 OLED over I2C and prints text.
 *
 * This sketch demonstrates basic initialization of the Adafruit_SSD1306 library
 * and prints a few lines to the display. It also opens a Serial connection for
 * debug messages.
 *
 * @author lavany108
 * @date 2026-02-11
 */

void loop() {
// write your code here
}