#include "Arduino.h"
#include "ReedSwitch.h"

ReedSwitch::ReedSwitch(int pin, uint8_t normallyOpen) {
  pinMode(pin, INPUT_PULLUP);
  _pin = pin;
  _normallyOpen = normallyOpen;
  _state = !_normallyOpen;
}

uint8_t ReedSwitch::isOpen() {
  int newState = digitalRead(PIN_D2)^_normallyOpen;
  if (newState != _state) {
    delay(READ_DELAY);
    newState = digitalRead(PIN_D2)^_normallyOpen;
    _state = newState;
  }
  return _state;
}

uint8_t ReedSwitch::isClosed() {
  return !isOpen();
}
