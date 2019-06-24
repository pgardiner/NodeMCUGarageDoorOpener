#import "commonDefs.h"
#define READ_DELAY 100 // delay in ms to avoid switching back and forth when state changes.

class ReedSwitch
{
  public:
    ReedSwitch(int pin, uint8_t normallyOpen);
    uint8_t isOpen();
    uint8_t isClosed();
  private:
    int _pin;
    uint8_t _normallyOpen;
    uint8_t _state;
};
