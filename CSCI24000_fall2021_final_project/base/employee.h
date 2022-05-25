#ifndef EMPLOYEE_H_EXISTS
#define EMPLOYEE_H_EXISTS

#include "college.h"
#include "dates.h"
#include <string>

class Employee {
private:
	College* employeeCollege;
	Dates* birthDate;
	Dates* currentDate;
	std::string lastName;
	std::string firstName;
	std::string numOfYearsWithCompany;
	std::string annualSalary;
public:
	Employee(std::string);
	Employee();
	~Employee();
	std::string getFirstName();
	void setFirstName(std::string);
	std::string getLastName();
	void setLastName(std::string);
	College getEmployeeCollege();
	void setEmployeeCollege(College*);
	Dates getBirthDate();
	void setBirthDate(Dates*);
	Dates getCurrentDate();
	void setCurrentDate(Dates*);
	std::string getNumOfYearsWithCompany();
	void setNumOfYearsWithCompany(std::string);
	std::string getAnnualSalary();
	void setAnnualSalary(std::string);
	friend std::ostream& operator << (std::ostream& outputStream, const Employee& employee);
	void set(std::string);
	void printAll();
	void printFullName();
};

#endif
