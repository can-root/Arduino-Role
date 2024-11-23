#include <Role.h>

Role motor(3);
Role led(4);


void setup() {


}

void loop() {
    motor.tetikle(0);
    led.tetikle(1);
    delay(1300);
    motor.tetikle(1);
    led.tetikle(1);
    delay(1300);
    motor.tetikle(0);
    led.tetikle(1);
    delay(1300);


}
