#include "inclib.h"

Tempreg::Tempreg(int D5, int D4)
{
    lcd.begin(D5, D4);  
}


void Tempreg::measuretemp(void)
{
    for(int i=0;i< 10;i++)
      {
        temp = 20 + i;
        temps[i] = temp;
      }
}

void Tempreg::heater(void)
{

    lcd.print("Heating setup");
    lcd.setCursor(1,2);
    lcd.print("turned on");
    delay(3000);
    lcd.clear();
}

void Tempreg::printvals(void)
{
     for(int j; j<10; j++)
     {
        lcd.print("temperature");
        lcd.setCursor(1,1);
        lcd.print(temps[j]);
        lcd.print( " " "\xDF" "C");
        delay(3000);
        lcd.clear();
     }
}
