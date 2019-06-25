#import "commonDefs.h"
class Relay 
{
  public:
    Relay(int pin);
    void open();
    void close();
    void closeMillis(int millis);
  private:
    int _pin;
};
