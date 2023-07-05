#include "Contact.hpp"

Contact::Contact()
{	
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret, int index)
{
	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->secret = secret;
}

Contact::~Contact()
{
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

std::string Contact::getLastName()
{
	return this->lastName;
}

std::string Contact::getNickName()
{
	return this->nickName;
}

std::string Contact::getDarkestSecret()
{
	return this->secret;
}

std::string Contact::getPhoneNumber()
{
	return this->phoneNumber;
}

int Contact::getIndex()
{
	return this->index;
}