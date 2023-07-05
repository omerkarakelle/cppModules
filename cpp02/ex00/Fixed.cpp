#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}

Fixed& Fixed::operator=( const Fixed &rhs ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->setRawBits(rhs.getRawBits());
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointValue;
}

void    Fixed::setRawBits( int const raw ) {
    this->fixedPointValue = raw;
}