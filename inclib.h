#ifndef inclib_h
#define inclib_h

#include <Arduino.h>
#include <LiquidCrystal.h>

class Tempreg
{

    public:
        int temp = 0;
        int temps[10];
        LiquidCrystal lcd = LiquidCrystal(12, 11, 5, 4, 3, 2);
        Tempreg(int D5, int D4);
        void measuretemp(void);
        void heater(void);
        void printvals(void);
};

#endif

