#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::setContact()
{
	int i = 0;
	std::string str[5];
	str[0] = "First Name: ";
	str[1] = "Last Name: ";
	str[2] = "Nick Name: ";
	str[3] = "Phone Number: ";
	str[4] = "Darkest Secret: ";

	while (i < 5)
	{
		std::cout << str[i];
		getline(std::cin, str[i]);
		if (str[i][0] != '\0')
			i++;
	}
	contact[this->number % 8] = Contact(str[0], str[1], str[2], str[3], str[4], this->number % 8);
	std::cout << "Contact is created." << std::endl;
	this->number++;
}

void PhoneBook::printData(std::string data)
{
	int len = data.length();
	if (len > 10)
		std::cout << data.substr(0, 9) << ".";
	else
	{
		while (++len <= 10)
			std::cout << " ";
		std::cout << data;
	}
	std::cout << "|";
}

void PhoneBook::writeColumn(int k)
{
	printData(std::to_string(this->contact[k].getIndex()));
	printData(this->contact[k].getFirstName());
	printData(this->contact[k].getLastName());
	printData(this->contact[k].getNickName());
	std::cout << std::endl;
}

void PhoneBook::getUserData()
{
	int index;
	std::string index_str;
	std::cout << "Write the index: ";
	std::cin >> index_str;
	index = std::atoi(index_str.c_str());
	std::cin.ignore();
	
	if (!(index >= 0 && index <= 7 && index <= this->number - 1) || std::cin.fail())
	{
		std::cout << "Error. Invalid index." << std::endl;
		return ;
	}
	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << "First Name: " << this->contact[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contact[index].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contact[index].getNickName() << std::endl;
    std::cout << "Number: " << this->contact[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contact[index].getDarkestSecret() << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;
}

void PhoneBook::getContact()
{
	std::cout << std::endl << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < number; i++)
	{
		if (i < 8)
			writeColumn(i);
	}
	getUserData();
}