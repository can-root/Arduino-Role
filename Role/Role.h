#ifndef Role_h
#define Role_h

#include "Arduino.h"

class Role {
public:
    Role(int pin);
    void tetikle(int durum);

private:
    int role_pin;
};

#endif
