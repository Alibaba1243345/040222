#include <iostream>
#include "WeatherDate.h"
#include "CurrentConditionDisplay.h"

int main()
{
    WeatherDate* weatherDate = new WeatherDate();
    CurrentConditionDisplay* currentConditionDisplay = new CurrentConditionDisplay(weatherDate)

    currentConditionDisplay->update(-15, 40, 770);
    currentConditionDisplay->update(-12, 44, 775);
    currentConditionDisplay->update(-11, 45, 770);
}

