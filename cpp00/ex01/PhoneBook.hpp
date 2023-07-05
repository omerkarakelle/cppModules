#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void setContact();
		void findUser();
		void getContact();
		void writeColumn(int i);
		void printData(std::string data);
		void getUserData();
		int	number;
};

#endif