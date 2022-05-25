#include "date.h"
#include <iostream>
#include <string>

Date::Date()
{
	Date::month = "";
	Date::day = "";
	Date::year = "";
}

Date::Date(std::string month, std::string day, std::string year)
{
	Date::month = month;
	Date::day = day;
	Date::year = year;
}

Date::~Date()
{}


std::string Date::getMonth()
{
	return Date::month;
}

void Date::setMonth(std::string monthValue)
{
	Date::month = monthValue;
}

std::string Date::getDay()
{
	return Date::day;
}

void Date::setDay(std::string dayValue)
{
	Date::day = dayValue;
}

std::string Date::getYear()
{
	return Date::year;
}

void Date::setYear(std::string yearValue)
{
	Date::year = yearValue;
}

std::ostream& operator << (std::ostream& outputStream, const Date& date)
{
	outputStream << date.month << "/" << date.day << "/" << date.year;

	return outputStream;
}

void Date::printDate()
{
	std::cout << month << day << year;
}
