#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address {
private:
	std::string addressLine1;
	std::string addressLine2;
	std::string city;
	std::string state;
	std::string zipCode;
public:
	Address();
	Address(std::string, std::string, std::string, std::string, std::string);
	~Address();
	std::string getAddressLine1();
	void setAddressLine1(std::string);
	std::string getAddressLine2();
	void setAddressLine2(std::string);
	std::string getCity();
	void setCity(std::string);
	std::string getState();
	void setState(std::string);
	std::string getZipCode();
	void setZipCode(std::string);
	friend std::ostream& operator << (std::ostream& outputStream, const Address& address);
	void printAddress();
};

#endif
