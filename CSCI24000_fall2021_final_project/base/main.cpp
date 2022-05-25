#include "employee.h"
#include <sstream>
#include <fstream>

#define numOfLines 10

int main() {

	int CEOLogin = 1;
	int userInput;

	std::ifstream inputFile;

	inputFile.open("employeesOriginalReport.txt");

	std::string inputLine;

	Employee* employeeArray = new Employee[numOfLines];

	int arrayCount = 0;

	for (arrayCount = 0; arrayCount < numOfLines; arrayCount++)
	{
		getline(inputFile, inputLine);
		employeeArray[arrayCount].set(inputLine);
	}

	inputFile.close();

	while (CEOLogin == 1)
	{
		userInput = 0;

		std::cout << "The SEMDP (Super Employee Management and Database Program)\n\n1. Generate a report of employee names\n2. Generate a report of employee education information\n3. Generate a report of employee personal and company information\n4. Generate a full employee report\n5. Hide employee information\n6. Exit" << std::endl;
		std::cout << "\nPlease enter your selection: " << std::endl;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			std::ofstream namesReport;

			namesReport.open("employeesNamesReport.txt");

			int namesReportCount;

			for (namesReportCount = 0; namesReportCount < numOfLines; namesReportCount++)
			{
				namesReport << employeeArray[namesReportCount].getLastName() << "," << employeeArray[namesReportCount].getFirstName() << std::endl;
			}

			namesReport.close();

			std::cout << "\nReport employeesNamesReport.txt generated.\n" << std::endl;
		}

		if (userInput == 2)
		{
			std::ofstream eduReport;

			eduReport.open("employeesEduReport.txt");

			int eduReportCount;

			for (eduReportCount = 0; eduReportCount < numOfLines; eduReportCount++)
			{
				eduReport << employeeArray[eduReportCount].getEmployeeCollege() << std::endl;
			}

			eduReport.close();

			std::cout << "\nReport employeesEduReport.txt generated.\n" << std::endl;
		}

		if (userInput == 3)
		{
			std::ofstream infoReport;

			infoReport.open("employeesInfoReport.txt");

			int infoReportCount;

			for (infoReportCount = 0; infoReportCount < numOfLines; infoReportCount++)
			{
				infoReport << employeeArray[infoReportCount].getBirthDate() << "," << employeeArray[infoReportCount].getCurrentDate() << "," << employeeArray[infoReportCount].getNumOfYearsWithCompany() << "," << employeeArray[infoReportCount].getAnnualSalary() << std::endl;
			}

			infoReport.close();

			std::cout << "\nReport employeesInfoReport.txt generated.\n" << std::endl;
		}

		if (userInput == 4)
		{
			std::ofstream fullReport;

			fullReport.open("employeesFullReport.txt");

			int fullReportCount;

			for (fullReportCount = 0; fullReportCount < numOfLines; fullReportCount++)
			{
				fullReport << employeeArray[fullReportCount] << std::endl;
			}

			fullReport.close();

			std::cout << "\nReport employeesFullReport.txt generated.\n" << std::endl;
		}

		if (userInput == 5)
		{
			int numOfLinesToSee = 0;

			std::cout << "\nPlease enter how many lines of employee information you would like to see: " << std::endl;
			std::cin >> numOfLinesToSee;

			if (numOfLinesToSee > 10)
			{
				std::cout << "\nPlease enter a lower number than 10.\n" << std::endl;
			}

			else
			{
				std::ofstream hideReport;

				hideReport.open("employeesHideReport.txt");

				int hideReportCount;

				for (hideReportCount = 0; hideReportCount < numOfLinesToSee; hideReportCount++)
				{
					hideReport << employeeArray[hideReportCount] << std::endl;
				}

				hideReport.close();

				std::cout << "\nReport employeesHideReport.txt generated.\n" << std::endl;
			}
		}

		if (userInput == 6)
		{
			CEOLogin = 0;
		}
	}

	delete[] employeeArray;

	return 0;
}
