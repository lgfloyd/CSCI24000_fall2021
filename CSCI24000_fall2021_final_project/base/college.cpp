#include "college.h"
#include <iostream>

College::College()
{
	College::collegeName = "";
	College::degreeType = "";
	College::degreeYear = "";
}

College::College(std::string collegeName, std::string degreeType, std::string degreeYear)
{
	College::collegeName = collegeName;
	College::degreeType = degreeType;
	College::degreeYear = degreeYear;
}

College::~College()
{}

std::string College::getCollegeName()
{
	return College::collegeName;
}

void College::setCollegeName(std::string collegeName)
{
	College::collegeName = collegeName;
}

std::string College::getDegreeType()
{
	return College::degreeType;
}

void College::setDegreeType(std::string degreeType)
{
	College::degreeType = degreeType;
}

std::string College::getDegreeYear()
{
	return College::degreeYear;
}

void College::setDegreeYear(std::string degreeYear)
{
	College::degreeYear = degreeYear;
}

std::ostream& operator << (std::ostream& outputStream, const College& college)
{
	outputStream << college.collegeName << "," << college.degreeType << "," << college.degreeYear;

	return outputStream;
}

void College::printCollege()
{
	std::cout << collegeName << degreeType << degreeYear;
}
