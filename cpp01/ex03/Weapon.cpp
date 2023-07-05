#include "Weapon.hpp"

const std::string & Weapon::getType()
{
    return (this->_type);
}

Weapon::Weapon(std::string name)
{
    this->setType(name);
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}