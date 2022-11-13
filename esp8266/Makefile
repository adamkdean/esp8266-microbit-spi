# Copyright (C) 2022 Adam K Dean <adamkdean@googlemail.com>
# Use of this source code is governed by the GPL-3.0
# license that can be found in the LICENSE file.

.PHONY: dev compile monitor upload

#
# Variables
#
SERIAL_PORT ?= /dev/cu.usbserial-01D231D2
FQBN ?= esp8266:esp8266:huzzah

#
# Rules
#
dev: upload monitor

compile:
	@echo "Compiling ESP8266 firmware"
	@arduino-cli compile --fqbn $(FQBN) firmware

upload: compile
	@echo "Uploading ESP8266 firmware"
	@arduino-cli upload -p $(SERIAL_PORT) --fqbn $(FQBN) firmware

monitor:
	@echo "Monitoring ESP8266 serial port"
	@screen $(SERIAL_PORT) 115200

