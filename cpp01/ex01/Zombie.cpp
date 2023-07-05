#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Constructor called. " << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}