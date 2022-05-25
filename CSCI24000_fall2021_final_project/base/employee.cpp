#include "employee.h"
#include "college.h"
#include "dates.h"
#include <string>
#include <sstream>

Employee::Employee(std::string inputLine)
{
	std::stringstream stringStream(inputLine);

	stringStream.clear();
	stringStream.str("");

	Employee::employeeCollege = new College();
	Employee::birthDate = new Dates();
	Employee::currentDate = new Dates();

	std::string tempCollegeName, tempDegreeType, tempDegreeYear;
	std::string tempBirthMonth, tempBirthDay, tempBirthYear;
	std::string tempCurrentMonth, tempCurrentDay, tempCurrentYear;
	std::string tempNumOfYearsWithCompany, tempAnnualSalary;

	getline(stringStream, Employee::lastName, ',');
	getline(stringStream, Employee::firstName, ',');
	getline(stringStream, tempCollegeName, ',');
	getline(stringStream, tempDegreeType, ',');
	getline(stringStream, tempDegreeYear, ',');
	getline(stringStream, tempBirthMonth, '/');
	getline(stringStream, tempBirthDay, '/');
	getline(stringStream, tempBirthYear, ',');
	getline(stringStream, tempCurrentMonth, '/');
	getline(stringStream, tempCurrentDay, '/');
	getline(stringStream, tempCurrentYear, ',');
	getline(stringStream, tempNumOfYearsWithCompany, ',');
	getline(stringStream, tempAnnualSalary);

	Employee::employeeCollege->setCollegeName(tempCollegeName);
	Employee::employeeCollege->setDegreeType(tempDegreeType);
	Employee::employeeCollege->setDegreeYear(tempDegreeYear);

	Employee::currentDate->setMonth(tempCurrentMonth);
	Employee::currentDate->setDay(tempCurrentDay);
	Employee::currentDate->setYear(tempCurrentYear);

	Employee::birthDate->setMonth(tempBirthMonth);
	Employee::birthDate->setDay(tempBirthDay);
	Employee::birthDate->setYear(tempBirthYear);

	Employee::setNumOfYearsWithCompany(tempNumOfYearsWithCompany);
	Employee::setAnnualSalary(tempAnnualSalary);
}

Employee::Employee()
{
	Employee::firstName = "";
	Employee::lastName = "";
	Employee::birthDate = new Dates();
	Employee::currentDate = new Dates();
	Employee::employeeCollege = new College();
	Employee::numOfYearsWithCompany = "";
	Employee::annualSalary = "";
}

Employee::~Employee()
{
	delete employeeCollege;
	delete birthDate;
	delete currentDate;
}


void Employee::setFirstName(std::string firstName)
{
	Employee::firstName = firstName;
}

std::string Employee::getFirstName()
{
	return Employee::firstName;
}

void Employee::setLastName(std::string lastName)
{
	Employee::lastName = lastName;
}

std::string Employee::getLastName()
{
	return Employee::lastName;
}

College Employee::getEmployeeCollege()
{
	return *Employee::employeeCollege;
}

void Employee::setEmployeeCollege(College* college)
{
	Employee::employeeCollege = college;
}

Dates Employee::getBirthDate()
{
	return *Employee::birthDate;
}

void Employee::setBirthDate(Dates* birthDate)
{
	Employee::birthDate = birthDate;
}

Dates Employee::getCurrentDate()
{
	return *Employee::currentDate;
}

void Employee::setCurrentDate(Dates* currentDate)
{
	Employee::currentDate = currentDate;
}

std::string Employee::getNumOfYearsWithCompany()
{
	return Employee::numOfYearsWithCompany;
}

void Employee::setNumOfYearsWithCompany(std::string numOfYearsWithCompany)
{
	Employee::numOfYearsWithCompany = numOfYearsWithCompany;
}

std::string Employee::getAnnualSalary()
{
	return Employee::annualSalary;
}

void Employee::setAnnualSalary(std::string annualSalary)
{
	Employee::annualSalary = annualSalary;
}

std::ostream& operator << (std::ostream& outputStream, const Employee& employee)
{
	outputStream << employee.lastName << "," << employee.firstName << "," << *employee.employeeCollege << "," << *employee.birthDate << "," << *employee.currentDate << "," << employee.numOfYearsWithCompany << "," << employee.annualSalary;

	return outputStream;
}

void Employee::set(std::string inputLine)
{
	std::stringstream stringStream(inputLine);

	stringStream.clear();

	std::string tempCollegeName, tempDegreeType, tempDegreeYear;
	std::string tempBirthMonth, tempBirthDay, tempBirthYear;
	std::string tempCurrentMonth, tempCurrentDay, tempCurrentYear;
	std::string tempNumOfYearsWithCompany, tempAnnualSalary;

	getline(stringStream, Employee::lastName, ',');
	getline(stringStream, Employee::firstName, ',');
	getline(stringStream, tempCollegeName, ',');
	getline(stringStream, tempDegreeType, ',');
	getline(stringStream, tempDegreeYear, ',');
	getline(stringStream, tempBirthMonth, '/');
	getline(stringStream, tempBirthDay, '/');
	getline(stringStream, tempBirthYear, ',');
	getline(stringStream, tempCurrentMonth, '/');
	getline(stringStream, tempCurrentDay, '/');
	getline(stringStream, tempCurrentYear, ',');
	getline(stringStream, tempNumOfYearsWithCompany, ',');
	getline(stringStream, tempAnnualSalary);

	Employee::employeeCollege->setCollegeName(tempCollegeName);
	Employee::employeeCollege->setDegreeType(tempDegreeType);
	Employee::employeeCollege->setDegreeYear(tempDegreeYear);

	Employee::currentDate->setMonth(tempCurrentMonth);
	Employee::currentDate->setDay(tempCurrentDay);
	Employee::currentDate->setYear(tempCurrentYear);

	Employee::birthDate->setMonth(tempBirthMonth);
	Employee::birthDate->setDay(tempBirthDay);
	Employee::birthDate->setYear(tempBirthYear);

	Employee::setNumOfYearsWithCompany(tempNumOfYearsWithCompany);
	Employee::setAnnualSalary(tempAnnualSalary);
}

void Employee::printAll()
{
	Employee::printFullName();

	employeeCollege->printCollege();
	birthDate->printDates();
	currentDate->printDates();

	std::cout << numOfYearsWithCompany << annualSalary;
}

void Employee::printFullName()
{
	std::cout << firstName << lastName;
}
