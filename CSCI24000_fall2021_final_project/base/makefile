printEmployeesReports: college.o dates.o main.o employee.o
	g++ college.o dates.o main.o employee.o -o printEmployeesReports
college.o: college.cpp college.h
	g++ -c college.cpp
dates.o: dates.cpp dates.h
	g++ -c dates.cpp
main.o: main.cpp employee.h
	g++ -c main.cpp
employee.o: employee.cpp employee.h college.h dates.h
	g++ -c employee.cpp
clean:
	rm -f *.o
	rm -f employeesNamesReport.txt
	rm -f employeesEduReport.txt
	rm -f employeesInfoReport.txt
	rm -f employeesFullReport.txt
	rm -f employeesHideReport.txt
	rm printEmployeesReports
run: printEmployeesReports
	./printEmployeesReports
