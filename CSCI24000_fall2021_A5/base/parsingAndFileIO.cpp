#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#define numOfIntsPerLine 3

int main()
{
	std::ifstream inputFile;
	std::ofstream outputFile;

	std::string currentLine;
	std::string text;

	std::stringstream inputStringStream;
	std::stringstream outputStringStream;

	inputFile.open("input.txt");
	outputFile.open("output.txt");

	while (getline(inputFile, currentLine))
	{
		inputStringStream.clear();
		inputStringStream.str("");

		inputStringStream.str(currentLine);

		int ints[numOfIntsPerLine];

		char removeComma;

		for (int i = 0; i < numOfIntsPerLine; i++)
		{
			if (i == 0)
			{
				inputStringStream >> ints[i];
			}
			else
			{
				inputStringStream >> removeComma >> ints[i];
			}
		}

		int sum = 0;

		for (int i = 0; i < numOfIntsPerLine; i++)
		{
			sum += ints[i];
		}

		getline(inputFile, text);

		outputStringStream.clear();
		outputStringStream.str("");

		outputStringStream.str(text);

		for (int i = 0; i < sum; i++)
		{
			if (i == (sum - 1))
			{
				outputStringStream << text;
			}
			else
			{
				outputStringStream << text << ",";
			}
		}

		outputFile << outputStringStream.str() << std::endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}
