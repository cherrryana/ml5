#include "daytime.h"

DayTime::DayTime()
    :hour(0), min(0)
{

}

DayTime::DayTime(int h, int m)
{
    this -> hour = h < dayHours ? h : h - (h / dayHours) * dayHours;
    this -> min = m < hourMins ? m : m - (m / hourMins) * hourMins;

    if (m > hourMins - 1)
        (this -> hour) += (m / hourMins);
}


int DayTime::operator -(DayTime o)
{
    if (this -> hour - o.hour > 0)
        return (this -> hour - o.hour) * hourMins + (this -> min - o.min);
    else return (dayHours + this -> hour - o.hour) * hourMins + (this -> min - o.min);

}

DayTime DayTime::operator +(int o)
{
    return DayTime(this -> hour, (this -> min) + o);
}

bool DayTime::operator == (DayTime o)
{
    if ((this -> hour == o.hour) && (this -> min == o.min))
        return true;
    else return false;
}
