#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{ }

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their hands" << std::endl;
}

void HumanB::setWeapon(Weapon & wp)
{
    this->weapon = &wp;
}