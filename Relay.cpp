#include "Arduino.h"
#include "Relay.h"

Relay::Relay(int pin,uint8_t normallyOpen) {
  pinMode(pin,OUTPUT);
  _pin=pin;
  _normallyOpen=normallyOpen;
}
void Relay::open() {
  digitalWrite(_pin,!_normallyOpen);
}
void Relay::close() {
  digitalWrite(_pin,_normallyOpen);
}
void Relay::closeMillis(int millis) {
  close();
  delay(millis);
  open();
}
