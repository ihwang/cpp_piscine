#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(int nb)
{
    std::cout << "Int constructor called" << std::endl;
    value = nb * (1 << fractional);
}

Fixed::Fixed(float nb)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(nb * (1 << fractional));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)value / (1 << fractional));
}

int Fixed::toInt(void) const
{
    return ((int)value / (1 << fractional));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}