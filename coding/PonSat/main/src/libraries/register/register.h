#ifndef REGISTER_H
#define REGISTER_H
#include "Arduino.h"
class Register
{
    byte sh_cp, st_cp, ds, current_state;
    public:
        void attach(byte sh, byte st, byte data);
        void write(byte bin);
        void setPin(byte pin, bool value);
        byte read();
};

#endif