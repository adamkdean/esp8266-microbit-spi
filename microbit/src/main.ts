// Copyright (C) 2022 Adam K Dean <adamkdean@googlemail.com>
// Use of this source code is governed by the GPL-3.0
// license that can be found in the LICENSE file.

// Setup serial
serial.setBaudRate(115200)
serial.writeLine('Microbit SPI receiver starting...')

// Setup SPI
pins.spiPins(DigitalPin.P15, DigitalPin.P14, DigitalPin.P13)
pins.spiFormat(8, 0)
pins.spiFrequency(1000000)
serial.writeLine('Microbit SPI receiver ready')

// let data = ''
basic.forever(() => {
  let value = pins.spiWrite(0x00)
  if (value) serial.writeLine(value.toString())
  // if (data.length === 8) {
  //   const byte = parseInt(data.join(''), 2)
  //   serial.writeLine(byte + ' ')
  //   data = []
  // }
})
