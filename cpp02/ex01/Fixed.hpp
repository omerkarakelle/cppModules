#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &old);
    Fixed& operator=(const Fixed &rhs);
    ~Fixed();
    Fixed(int const i);
    Fixed(float const f);

    int     toInt(void) const;
    float   toFloat(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream &ost, const Fixed &rhs);

#endif