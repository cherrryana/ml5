#include <QCoreApplication>
#include "daytime.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DayTime begin = DayTime(15, 30);
    DayTime end = DayTime(17, 00);

    int duration = end - begin;
    if (begin + duration == end)
    {
        qDebug("5 пара длилась %d минут, проверка пройдена", duration);
    }

    return a.exec();
}
