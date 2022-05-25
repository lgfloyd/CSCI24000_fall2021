#include "student.h"
#include <sstream>
#include <fstream>

#define numOfLines 50

int main() {
	std::ifstream inputFile;
	std::ofstream fullReport;
	std::ofstream shortReport;

	std::string inputLine;

	inputFile.open("students.dat");
	fullReport.open("fullReport.txt");
	shortReport.open("shortReport.txt");

	Student* studentArray = new Student[numOfLines];

	int arrayCount = 0;

	for (arrayCount = 0; arrayCount < numOfLines; arrayCount++)
	{
		getline(inputFile, inputLine);
		studentArray[arrayCount].set(inputLine);
	}

	int fullReportCount;

	for (fullReportCount = 0; fullReportCount < numOfLines; fullReportCount++)
	{
		fullReport << studentArray[fullReportCount] << std::endl;
	}

	int shortReportCount;

	for (shortReportCount = 0; shortReportCount < numOfLines; shortReportCount++)
	{
		shortReport << studentArray[shortReportCount].getLastName() << "," << studentArray[shortReportCount].getFirstName() << std::endl;
	}

	fullReport.close();
	shortReport.close();

	delete[] studentArray;

	return 0;
}
