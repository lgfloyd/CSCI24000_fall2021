#ifndef DATES_H_EXISTS
#define DATES_H_EXISTS

#include <iostream>
#include <string>

class Dates {
private:
	std::string month;
	std::string day;
	std::string year;
public:
	Dates();
	Dates(std::string, std::string, std::string);
	~Dates();
	std::string getMonth();
	void setMonth(std::string);
	std::string getDay();
	void setDay(std::string);
	std::string getYear();
	void setYear(std::string);
	friend std::ostream& operator << (std::ostream& outputStream, const Dates& dates);
	void printDates();
};

#endif
