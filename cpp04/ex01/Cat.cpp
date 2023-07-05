#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat( void )
{
    delete  this->brain;
    std::cout << this->type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miyav!" << std::endl;
}

Cat::Cat( const Cat& src )
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}