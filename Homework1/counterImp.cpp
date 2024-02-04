//counter implementation

#include "counterType.h"

void counterType::setCounter(int c)
{
    if (c >= 0)
    counter = c;
    else
    counter = 0;
}

int counterType::getCounter() const
{
    return counter;
}

void counterType::increment()
{
    counter++;
}

void counterType::decrement()
{
    if (counter > 0)
        counter--;
}

counterType::counterType(int c)
{
if (c >= 0)
counter = c;
else
counter = 0;
}