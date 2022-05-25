#include "address.h"
#include <iostream>

Address::Address()
{
	Address::addressLine1 = "";
	Address::addressLine2 = "";
	Address::city = "";
	Address::state = "";
	Address::zipCode = "";
}

Address::Address(std::string addressLine1, std::string addressLine2, std::string city, std::string state, std::string zipCode)
{
	Address::addressLine1 = addressLine1;
	Address::addressLine2 = addressLine2;
	Address::city = city;
	Address::state = state;
	Address::zipCode = zipCode;
}

Address::~Address()
{}

std::string Address::getAddressLine1()
{
	return Address::addressLine1;
}

void Address::setAddressLine1(std::string addressLine1)
{
	Address::addressLine1 = addressLine1;
}

std::string Address::getAddressLine2()
{
	return Address::addressLine2;
}

void Address::setAddressLine2(std::string addressLine2)
{
	Address::addressLine2 = addressLine2;
}

std::string Address::getCity()
{
	return Address::city;
}

void Address::setCity(std::string city)
{
	Address::city = city;
}

std::string Address::getState()
{
	return Address::state;
}

void Address::setState(std::string state)
{
	Address::state = state;
}

std::string Address::getZipCode()
{
	return Address::zipCode;
}

void Address::setZipCode(std::string zipCode)
{
	Address::zipCode = zipCode;
}

std::ostream& operator << (std::ostream& outputStream, const Address& address)
{
	outputStream << address.addressLine1 << "," << address.addressLine2 << "," << address.city << "," << address.state << "," << address.zipCode;

	return outputStream;
}

void Address::printAddress()
{
	std::cout << addressLine1 << addressLine2 << city << state << zipCode;
}
