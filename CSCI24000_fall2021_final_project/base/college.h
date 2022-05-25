#ifndef COLLEGE_H_EXISTS
#define COLLEGE_H_EXISTS

#include <iostream>
#include <string>

class College {
private:
	std::string collegeName;
	std::string degreeType;
	std::string degreeYear;
public:
	College();
	College(std::string, std::string, std::string);
	~College();
	std::string getCollegeName();
	void setCollegeName(std::string);
	std::string getDegreeType();
	void setDegreeType(std::string);
	std::string getDegreeYear();
	void setDegreeYear(std::string);
	friend std::ostream& operator << (std::ostream& outputStream, const College& college);
	void printCollege();
};

#endif
