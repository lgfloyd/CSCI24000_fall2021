#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include "address.h"
#include "date.h"
#include <string>

class Student {
private:
	Address* studentAddress;
	Date* birthDay;
	Date* graduationDay;
	std::string lastName;
	std::string firstName;
	std::string gradePointAverage;
	std::string completedCreditHours;
public:
	Student(std::string);
	Student();
	~Student();
	std::string getFirstName();
	void setFirstName(std::string);
	std::string getLastName();
	void setLastName(std::string);
	Address getStudentAddress();
	void setStudentAddress(Address*);
	Date getBirthDay();
	void setBirthDay(Date*);
	Date getGraduationDay();
	void setGraduationDay(Date*);
	std::string getGPA();
	void setGPA(std::string);
	std::string getCreditHours();
	void setCreditHours(std::string);
	friend std::ostream& operator << (std::ostream& outputStream, const Student& student);
	void set(std::string);
	void printAll();
	void printNames();
};

#endif
