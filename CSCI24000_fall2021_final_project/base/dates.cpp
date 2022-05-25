#include "dates.h"
#include <iostream>
#include <string>

Dates::Dates()
{
	Dates::month = "";
	Dates::day = "";
	Dates::year = "";
}

Dates::Dates(std::string month, std::string day, std::string year)
{
	Dates::month = month;
	Dates::day = day;
	Dates::year = year;
}

Dates::~Dates()
{}


std::string Dates::getMonth()
{
	return Dates::month;
}

void Dates::setMonth(std::string month)
{
	Dates::month = month;
}

std::string Dates::getDay()
{
	return Dates::day;
}

void Dates::setDay(std::string day)
{
	Dates::day = day;
}

std::string Dates::getYear()
{
	return Dates::year;
}

void Dates::setYear(std::string year)
{
	Dates::year = year;
}

std::ostream& operator << (std::ostream& outputStream, const Dates& dates)
{
	outputStream << dates.month << "/" << dates.day << "/" << dates.year;

	return outputStream;
}

void Dates::printDates()
{
	std::cout << month << day << year;
}
