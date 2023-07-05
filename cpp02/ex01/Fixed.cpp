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

Fixed::Fixed( const Fixed &old )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old;
}

Fixed& Fixed::operator=( const Fixed &rhs ) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->setRawBits(rhs.getRawBits());
    return *this;
}

std::ostream& operator<<(std::ostream &ost, const Fixed &rhs)
{
    ost << rhs.toFloat();
    return ost;
}

Fixed::Fixed(int const i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = i << this->fractionalBits;
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(f * (1 << this->fractionalBits));
}

float Fixed::toFloat(void) const
{
    float const f = (float)(this->fixedPointValue) / (1 << this->fractionalBits);
    return f;
}

int Fixed::toInt(void) const
{
    int const i = this->fixedPointValue >> this->fractionalBits;
    return i;
}

int Fixed::getRawBits( void ) const 
{
    return this->fixedPointValue;
}

void    Fixed::setRawBits( int const raw ) 
{
    this->fixedPointValue = raw;
}