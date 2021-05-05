#include <inclib.h>

int Contrast=75;

Tempreg incumax(16, 2);

void setup()
{
    analogWrite(6,Contrast);
    incumax.heater();
}

void loop()
{

     incumax.measuretemp();
     incumax.printvals();
}
