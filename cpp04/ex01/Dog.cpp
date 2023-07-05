#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog( void )
{
    delete  this->brain;
    std::cout << this->type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Hav Hav!" << std::endl;
}

Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}