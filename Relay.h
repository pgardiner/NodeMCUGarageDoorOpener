#import "commonDefs.h"
class Relay 
{
  public:
    Relay(int pin,uint8_t normallyOpen);
    void open();
    void close();
    void closeMillis(int millis);
  private:
    int _pin;
    uint8_t _normallyOpen;
};
