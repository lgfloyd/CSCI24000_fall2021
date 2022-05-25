#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include "horse.h"

#define numberOfHorses 5

class Race {
private:
	Horse h[numberOfHorses];
	int length;
public:
	Race();
	void printLane(int horseNumber);
	void startRace();
};

#endif
