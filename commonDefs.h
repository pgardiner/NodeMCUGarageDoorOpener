#include "Arduino.h"

/* See note "NodeMCU esp32/esp12e PINS" in evernote for pins to use */
#ifdef ESP8266
  #define PIN_D0 16 // high at boot
  #define PIN_D1 5
  #define PIN_D2 4
  #define PIN_D3 0 // connected to flash. avoid
  #define PIN_D4 2 // this is onboard led. avoid
  #define PIN_D5 14
  #define PIN_D6 12
  #define PIN_D7 13
  #define PIN_D8 15 // boot fails if high
#endif
#ifdef ESP32
  #define PIN_D4 0
  #define PIN_D13 13
  #define PIN_D14 14
  #define PIN_D15 15
  #define PIN_D16 16
  #define PIN_D17 17
  #define PIN_D18 18
  #define PIN_D19 19
  #define PIN_D20 20
  #define PIN_D21 21
  #define PIN_D22 22
  #define PIN_D23 23
  #define PIN_D24 24
  #define PIN_D25 25
  #define PIN_D26 26
  #define PIN_D27 27
  #define PIN_D28 28
  #define PIN_D29 29
  #define PIN_D30 30
  #define PIN_D31 31
  #define PIN_D32 32
  #define PIN_D33 33
  /* 34 to 39 are input only */
  #define PIN_D34 34 
  #define PIN_D35 35 
  #define PIN_D36 36 
  #define PIN_D37 37
  #define PIN_D38 38
  #define PIN_D39 39
#endif
  
