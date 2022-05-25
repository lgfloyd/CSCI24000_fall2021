#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"

#define numberOfHorses 5
#define raceLength 15

int main()
{
    int seed;

    std::cout << "Please enter a random seed: ";
    std::cin >> seed;
    srand(seed);

    Race race;
    race.startRace();

    return(0);
}
