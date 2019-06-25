#include "Arduino.h"
#include "Relay.h"

Relay::Relay(int pin) {
  pinMode(pin,OUTPUT);
  _pin=pin;
}
void Relay::open() {
  digitalWrite(_pin,LOW);
}
void Relay::close() {
  digitalWrite(_pin,HIGH);
}
void Relay::closeMillis(int millis) {
  close();
  delay(millis);
  open();
}

