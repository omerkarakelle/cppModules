#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	PhoneBook pb;
	pb.number = 0;
	while (1)
	{
		command = "";
		std::cout << "Please write a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
			pb.setContact();
		else if (command == "SEARCH")
			pb.getContact();
		else if (command == "EXIT")
		{
			std::cout << "Good Bye :)" << std::endl;
			break;
		}
		else
			std::cout << "Wrong command." << std::endl;
	}
	return 0;
}
