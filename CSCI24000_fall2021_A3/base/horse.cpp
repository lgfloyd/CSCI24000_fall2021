#include <iostream>
#include <cstdlib>

#define numberOfHorses 5
#define raceLength 15

void startRace();
void printLane(int, int);
int advancePosition(int);
int getPosition(int);

int horse[numberOfHorses];

int main() 
{
    int seed;
    
    std::cout << "Please enter a random seed: ";
    std::cin >> seed;
    srand(seed);

    startRace();

    return(0);
}

void startRace() 
{
    int continueRace = 1;
    int finalNumber;

    while (continueRace == 1) 
    {
        for (int i = 0; i < numberOfHorses; i++)
        {

            horse[i] = advancePosition(horse[i]);
            
            printLane(i, horse[i]);
           
            if (getPosition(horse[i]) == (raceLength))
            {
                finalNumber = i;
                continueRace = 0;
            }
        }
        std::cout << "\n" << std::endl;
    }
    std::cout << "Horse " << finalNumber << " wins!" << std::endl;
}

int advancePosition(int position) 
{
    int coinFlip = rand() % 2;
    
    if (coinFlip == 1) 
    {
        position++;
    }
    return position;
}

void printLane(int horseNumber, int position)
{
    for (int i = 0; i < raceLength; i++)
    {
        int horsePosition = getPosition(position);

        if (i == horsePosition)
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

int getPosition(int position) 
{
    return position;
}
