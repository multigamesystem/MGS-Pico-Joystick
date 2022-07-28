/*
  PicoGamepad

  Turn a Raspberry Pico 2040 into an HID gamepad

  Supports:
  128 Buttons
  8 Analog axes
  4 Hat switches

  created 28 June 2021
  by Jake Wilkinson (RealRobots)

  This example code is in the public domain.

  https://www.gitlab.com/realrobots/PicoGamepad
*/

#include <PicoGamepad.h>

PicoGamepad gamepad;

// 16 bit integer for holding input values
int val;

void setup() {
  Serial.begin(115200);

  pinMode(LED_BUILTIN, OUTPUT);

  // Button on pin
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
  pinMode(24, INPUT_PULLUP);
}

void loop() {

  //  gamepad.SetS1(val);

  // Set button 0 of 128 by reading button on digital pin 28
  gamepad.SetButton(0, !digitalRead(0));
  gamepad.SetButton(1, !digitalRead(1));
  gamepad.SetButton(2, !digitalRead(2));
  gamepad.SetButton(3, !digitalRead(3));
  gamepad.SetButton(4, !digitalRead(4));
  gamepad.SetButton(5, !digitalRead(5));
  gamepad.SetButton(6, !digitalRead(6));
  gamepad.SetButton(7, !digitalRead(7));
  gamepad.SetButton(8, !digitalRead(8));
  gamepad.SetButton(9, !digitalRead(9));
  gamepad.SetButton(10, !digitalRead(10));
  gamepad.SetButton(11, !digitalRead(11));
  gamepad.SetButton(12, !digitalRead(12));
  gamepad.SetButton(13, !digitalRead(13));
  gamepad.SetButton(14, !digitalRead(14));
  gamepad.SetButton(15, !digitalRead(15));
  gamepad.SetButton(16, !digitalRead(16));
  gamepad.SetButton(17, !digitalRead(17));
  gamepad.SetButton(18, !digitalRead(18));
  gamepad.SetButton(19, !digitalRead(19));
  gamepad.SetButton(20, !digitalRead(20));
  gamepad.SetButton(21, !digitalRead(21));
  gamepad.SetButton(22, !digitalRead(22));

  // Send all inputs via HID
  // Nothing is send to your computer until this is called.
  gamepad.send_update();

  // Flash the LED just for fun
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  delay(100);
}
