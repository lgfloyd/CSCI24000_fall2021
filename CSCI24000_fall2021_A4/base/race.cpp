#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"

#define numberOfHorses 5
#define raceLength 15

Race::Race()
{
    Race::length = raceLength;
}

void Race::printLane(int horseNumber)
{
    for (int i = 0; i < length; i++)
    {
        int horsePosition = h[horseNumber].getPosition();

        if (horsePosition == i)
        {
            std::cout << horseNumber;
        }
        else
        {
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

void Race::startRace()
{
    int continueRace = 1;
    int finalNumber;

    while (continueRace == 1)
    {
        for (int i = 0; i < numberOfHorses; i++)
        {
            h[i].advancePosition();

            printLane(i);

            int horsePosition = h[i].getPosition();

            if (horsePosition == raceLength)
            {
                finalNumber = i;
                continueRace = 0;
            }
        }
        std::cout << "\n" << std::endl;
    }
    std::cout << "Horse " << finalNumber << " wins!" << std::endl;
}
