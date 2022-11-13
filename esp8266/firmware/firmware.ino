// Copyright (C) 2022 Adam K Dean <adamkdean@googlemail.com>
// Use of this source code is governed by the GPL-3.0
// license that can be found in the LICENSE file.

#include "SPI.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("Enabling SPI");

  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
  SPI.begin();
}

//int counter = 0;
void loop() {
  // SPI.transfer(0x2E);
  SPI.write(0x2E);
  Serial.println("Sent 0x2E");
  // digitalWrite(LED_BUILTIN, HIGH);
  // char msg[100];
  // sprintf(msg, "message %d", ++counter);
  // Serial.print("Sending message: ");
  // Serial.println(msg);
  // spi_send_string(msg);
  // delay(1000);
  // digitalWrite(LED_BUILTIN, LOW);
  // delay(1000);
}

// void spi_send_string(char *str) {
//   while (*str) {
//     SPI.transfer(*str);
//     str++;
//   }
// }
