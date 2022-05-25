printReports: address.o date.o main.o student.o
	g++ address.o date.o main.o student.o -o printReports
address.o: address.cpp address.h
	g++ -c address.cpp
date.o: date.cpp date.h
	g++ -c date.cpp
main.o: main.cpp student.h
	g++ -c main.cpp
student.o: student.cpp student.h address.h date.h
	g++ -c student.cpp
memcheck: 
	valgrind --tool=memcheck --leak-check=yes ./printReports
clean:
	rm -f *.o
	rm -f *.txt
	rm printReports
run: printReports
	./printReports
