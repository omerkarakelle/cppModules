#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_name = "Undefined";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 5;
    std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap( std::string name )
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 5;
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->_name << " is destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& rhs ) {
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    
    if (this->_hitPoints <= amount)
    {
        this->_hitPoints = 0;
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
    this->_hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->_energyPoints -= 1;
    this->_hitPoints += amount;
}