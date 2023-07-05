#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon & wp): name(_name), weapon(wp)
{
}

HumanA::~HumanA()
{ }

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}