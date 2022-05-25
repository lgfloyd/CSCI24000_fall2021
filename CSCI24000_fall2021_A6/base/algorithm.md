Goal- The goal of this program is to gain a deeper understanding of memory management by forcing myself to utilize the
standard C++ heap structure as much as possible. In the program I will build a normalized student record system and
create a class to represent student data. I will also create classes to handle other specific types of data including
dates and addresses. My system will include all the necessary header files, cpp files, makefile, and a main program to
incorporate the larger system. The goal of address.cpp and .h is to organize the addresses for each student in the
record system (aka .dat file). The goal of date.cpp and .h is to organize the dates for each student in the record
system. The goal of student.cpp and .h is to take the data organized from address and date and combine it with the
remaining data in the record. The goal of main.cpp is to open the .dat file and the .txt report files and write the
data organized in student, address, and date to the full and short report .txt files.

Input- address.cpp will use the .h file as input, and both will use the students.dat file as input. 
date.cpp will use the .h file as input, and both will use the students.dat file as input. student.h will use address.h
and date.h as input, student.cpp will use student, address, and date.h as input, and both will use students.dat as
input. main.cpp will use student.h as input as well as students.dat.

Output- All of the .cpp and .h files will work towards outputting the required data in fullReport.txt and shortReport.txt,
with date outputting the dates, address outputting the address, and student outputting all the data (for fullReport) and
just the names (shortReport). main.cpp will output the full and short report files with the organized data from the other
files in them.

Steps- As explained in the previous two sections, the .cpp and .h files will take the .dat file as input, and output the
fullReport and shortReport.txt files after they are ran and orgainzed the required data to write to the .txt files. 


