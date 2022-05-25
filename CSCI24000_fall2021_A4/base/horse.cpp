#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse()
{
    Horse::position = 0;
}

int Horse::getPosition()
{
    return position;
}

void Horse::advancePosition()
{
    int coinFlip = rand() % 2;

    if (coinFlip == 1)
    {
        position++;
    }
}
