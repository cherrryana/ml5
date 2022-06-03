#ifndef DAYTIME_H
#define DAYTIME_H
#include <iostream>


class DayTime
{
public:
    DayTime();
    DayTime(int h, int m);

    int operator - (DayTime o);
    DayTime operator + (int o);
    bool operator == (DayTime o);

private:
    int hour, min, dayHours = 24, hourMins = 60;
};

#endif // DAYTIME_H
