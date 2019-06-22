#include <Arduino.h>
#include <SPI.h>        // SPI Library
#include <wire.h>       // I2C Library
#include <SSD1306.h>    // Library for OLED Driver SSD1306

SSD1306 display(0x3C, 21, 22);  // Display configuration (Address, I2C_SDA_pin, I2C_SCL_pin)
int D1 = 13;    // variable declaration for LEDs
int D2 = 12;
int D3 = 14;
int D4 = 27;

void setup() {
  display.init();
  display.drawString(0, 0, "hello world");    // Print "hello world" on display at 0, 0
  display.display();
  pinMode(0, INPUT);
  pinMode(4, INPUT);
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  int S1 = digitalRead(0);    // Variable declaration and reading input of buttons
  int S2 = digitalRead(4);
  int S3 = digitalRead(16);
  int S4 = digitalRead(17);

  if S1 == HIGH {
    digitalWrite(D1, HIGH);
  } else {
    digitalWrite(D1, LOW);
  }

  if S2 == HIGH {
    digitalWrite(D2, HIGH);
  } else {
    digitalWrite(D2, LOW);
  }

  if S3 == HIGH {
    digitalWrite(D3, HIGH);
  } else {
    digitalWrite(D3, LOW);
  }

  if S4 == HIGH {
    digitalWrite(D4, HIGH);
  } else {
    digitalWrite(D4, LOW);
  }
}
