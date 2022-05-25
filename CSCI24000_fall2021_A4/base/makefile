horseRace: horse.o main.o race.o
	g++ horse.o main.o race.o -o horseRace
horse.o: horse.cpp horse.h
	g++ -c horse.cpp
main.o: main.cpp horse.h race.h
	g++ -c main.cpp
race.o: race.cpp horse.h race.h
	g++ -c race.cpp
clean:
	rm -f *.o
	rm horseRace
run: horseRace
	./horseRace
