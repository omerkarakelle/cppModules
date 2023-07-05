#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("undefined")
{
    this->_name = "undefined";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructor called." << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " high fives everybody." << std::endl;
    this->_energyPoints -= 1;
}