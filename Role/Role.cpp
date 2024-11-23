#include "Role.h"
#include "Arduino.h"

Role::Role(int pin) {
    role_pin = pin;
    pinMode(role_pin, OUTPUT);
}

void Role::tetikle(int durum) {
    if (durum == 1) {
        digitalWrite(role_pin, HIGH);
    } else if (durum == 0) {
        digitalWrite(role_pin, LOW);
    }
    else{

    }
}
