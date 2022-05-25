#include "student.h"
#include "address.h"
#include "date.h"
#include <string>
#include <sstream>

Student::Student(std::string inputLine)
{
	std::stringstream stringStream(inputLine);

	stringStream.clear();
	stringStream.str("");

	Student::studentAddress = new Address();
	Student::birthDay = new Date();
	Student::graduationDay = new Date();

	std::string tempAddressLine1, tempAddressLine2, tempCity, tempState, tempZipCode;
	std::string tempDateOfBirthDay, tempDateOfBirthMonth, tempDateOfBirthYear;
	std::string tempGraduationDay, tempGraduationMonth, tempGraduationYear;
	std::string tempGPA, tempCreditHoursCompleted;

	getline(stringStream, Student::lastName, ',');
	getline(stringStream, Student::firstName, ',');
	getline(stringStream, tempAddressLine1, ',');
	getline(stringStream, tempAddressLine2, ',');
	getline(stringStream, tempCity, ',');
	getline(stringStream, tempState, ',');
	getline(stringStream, tempZipCode, ',');
	getline(stringStream, tempDateOfBirthMonth, '/');
	getline(stringStream, tempDateOfBirthDay, '/');
	getline(stringStream, tempDateOfBirthYear, ',');
	getline(stringStream, tempGraduationMonth, '/');
	getline(stringStream, tempGraduationDay, '/');
	getline(stringStream, tempGraduationYear, ',');
	getline(stringStream, tempGPA, ',');
	getline(stringStream, tempCreditHoursCompleted);
	
	Student::studentAddress->setAddressLine1(tempAddressLine1);
	Student::studentAddress->setAddressLine2(tempAddressLine2);
	Student::studentAddress->setCity(tempCity);
	Student::studentAddress->setState(tempState);
	Student::studentAddress->setZipCode(tempZipCode);

	Student::graduationDay->setMonth(tempGraduationMonth);
	Student::graduationDay->setDay(tempGraduationDay);
	Student::graduationDay->setYear(tempGraduationYear);

	Student::birthDay->setMonth(tempDateOfBirthMonth);
	Student::birthDay->setDay(tempDateOfBirthDay);
	Student::birthDay->setYear(tempDateOfBirthYear);

	Student::setGPA(tempGPA);
	Student::setCreditHours(tempCreditHoursCompleted);
}

Student::Student()
{
	Student::firstName = "";
	Student::lastName = "";
	Student::birthDay = new Date();
	Student::graduationDay = new Date();
	Student::studentAddress = new Address();
	Student::gradePointAverage = "";
	Student::completedCreditHours = "";
}

Student::~Student()
{
	delete studentAddress;
	delete birthDay;
	delete graduationDay;
}


void Student::setFirstName(std::string firstName)
{
	Student::firstName = firstName;
}

std::string Student::getFirstName()
{
	return Student::firstName;
}

void Student::setLastName(std::string lastName)
{
	Student::lastName = lastName;
}

std::string Student::getLastName()
{
	return Student::lastName;
}

Address Student::getStudentAddress()
{
	return *Student::studentAddress;
}

void Student::setStudentAddress(Address* address)
{
	Student::studentAddress = address;
}

Date Student::getBirthDay()
{
	return *Student::birthDay;
}

void Student::setBirthDay(Date* birthDay)
{
	Student::birthDay = birthDay;
}

Date Student::getGraduationDay()
{
	return *Student::graduationDay;
}

void Student::setGraduationDay(Date* graduationDay)
{
	Student::graduationDay = graduationDay;
}

std::string Student::getGPA()
{
	return Student::gradePointAverage;
}

void Student::setGPA(std::string GPA)
{
	Student::gradePointAverage = GPA;
}

std::string Student::getCreditHours()
{
	return Student::completedCreditHours;
}

void Student::setCreditHours(std::string creditHours)
{
	Student::completedCreditHours = creditHours;
}

std::ostream& operator << (std::ostream& outputStream, const Student& student)
{
	outputStream << student.lastName << "," << student.firstName << "," << *student.studentAddress << "," << *student.birthDay << "," << *student.graduationDay << "," << student.gradePointAverage << "," << student.completedCreditHours;

	return outputStream;
}

void Student::set(std::string inputLine)
{
	std::stringstream stringStream(inputLine);

	stringStream.clear();

	std::string tempAddressLine1, tempAddressLine2, tempCity, tempState, tempZipCode;
	std::string tempDateOfBirthDay, tempDateOfBirthMonth, tempDateOfBirthYear;
	std::string tempGraduationDay, tempGraduationMonth, tempGraduationYear;
	std::string tempGPA, tempCreditHoursCompleted;

	getline(stringStream, Student::lastName, ',');
	getline(stringStream, Student::firstName, ',');
	getline(stringStream, tempAddressLine1, ',');
	getline(stringStream, tempAddressLine2, ',');
	getline(stringStream, tempCity, ',');
	getline(stringStream, tempState, ',');
	getline(stringStream, tempZipCode, ',');
	getline(stringStream, tempDateOfBirthMonth, '/');
	getline(stringStream, tempDateOfBirthDay, '/');
	getline(stringStream, tempDateOfBirthYear, ',');
	getline(stringStream, tempGraduationMonth, '/');
	getline(stringStream, tempGraduationDay, '/');
	getline(stringStream, tempGraduationYear, ',');
	getline(stringStream, tempGPA, ',');
	getline(stringStream, tempCreditHoursCompleted);

	Student::studentAddress->setAddressLine1(tempAddressLine1);
	Student::studentAddress->setAddressLine2(tempAddressLine2);
	Student::studentAddress->setCity(tempCity);
	Student::studentAddress->setState(tempState);
	Student::studentAddress->setZipCode(tempZipCode);

	Student::graduationDay->setMonth(tempGraduationMonth);
	Student::graduationDay->setDay(tempGraduationDay);
	Student::graduationDay->setYear(tempGraduationYear);

	Student::birthDay->setMonth(tempDateOfBirthMonth);
	Student::birthDay->setDay(tempDateOfBirthDay);
	Student::birthDay->setYear(tempDateOfBirthYear);

	Student::setGPA(tempGPA);
	Student::setCreditHours(tempCreditHoursCompleted);
}

void Student::printAll()
{
	Student::printNames();

	studentAddress->printAddress();
	birthDay->printDate();
	graduationDay->printDate();

	std::cout << gradePointAverage << completedCreditHours;
}

void Student::printNames()
{
	std::cout << firstName << lastName;
}
