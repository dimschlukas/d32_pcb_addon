#include <Arduino.h>
#include <SSD1306.h>    // Library for OLED Driver SSD1306

SSD1306 display(0x3C, 21, 22);  // Display configuration

int D1 = 13;    // variable declaration for LEDs
int D2 = 12;
int D3 = 14;
int D4 = 27;

void setup() {
  display.init();
  display.flipScreenVertically();
  for (int i = 0; i <= 100; i++) {
    display.drawProgressBar(10, 28, 100, 8, i);
    display.display();
    delay(10);
  }
  display.clear();

  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
  int S1 = digitalRead(2);    // Variable declaration and reading input of buttons
  int S2 = digitalRead(4);
  int S3 = digitalRead(16);
  int S4 = digitalRead(17);
  String Row1 = "Button 1 = " + String(S1);
  String Row2 = "Button 2 = " + String(S2);
  String Row3 = "Button 3 = " + String(S3);
  String Row4 = "Button 4 = " + String(S4);
  display.clear();
  display.drawString(0, 0, Row1);
  display.drawString(0, 10, Row2);
  display.drawString(0, 20, Row3);
  display.drawString(0, 30, Row4);
  display.display();

  if (S1 == HIGH) {
    digitalWrite(D1, HIGH);
  } else {
    digitalWrite(D1, LOW);
  }

  if (S2 == HIGH) {
    digitalWrite(D2, HIGH);
  } else {
    digitalWrite(D2, LOW);
  }

  if (S3 == HIGH) {
    digitalWrite(D3, HIGH);
  } else {
    digitalWrite(D3, LOW);
  }

  if (S4 == HIGH) {
    digitalWrite(D4, HIGH);
  } else {
    digitalWrite(D4, LOW);
  }
}
