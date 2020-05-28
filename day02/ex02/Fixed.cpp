#include "Fixed.hpp"

Fixed::Fixed(void)
{
    value = 0;
}

Fixed::Fixed(int nb)
{
    value = nb * (1 << fractional);
}

Fixed::Fixed(float nb)
{
    value = roundf(nb * (1 << fractional));
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed& f)
{
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    this->value = f.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed& f)
{
    return (value > f.value);
}

bool Fixed::operator<(const Fixed& f)
{
    return (value < f.value);
}

bool Fixed::operator>=(const Fixed& f)
{
    return (value >= f.value);
}

bool Fixed::operator<=(const Fixed& f)
{
    return (value <= f.value);
}

bool Fixed::operator==(const Fixed& f)
{
    return (value == f.value);
}

bool Fixed::operator!=(const Fixed& f)
{
    return (value != f.value);
}

Fixed Fixed::operator+(const Fixed& f)
{
    value += f.value;
    return (*this);
}

Fixed Fixed::operator-(const Fixed& f)
{
    value -= f.value;
    return (*this);
}

Fixed Fixed::operator*(const Fixed& f)
{
    value = (toFloat() * f.toFloat()) * (1 << fractional);
    return (*this);
}

Fixed Fixed::operator/(const Fixed& f)
{
    value = (toFloat() / f.toFloat()) * (1 << fractional);
    return (*this);
}

Fixed& Fixed::operator++()
{
    value += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);

    value += 1;
    return (temp);
}

Fixed& Fixed::operator--()
{
    value -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);

    value -= 1;
    return (temp);
}

int Fixed::getRawBits(void) const
{
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

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if (fix1.value >= fix2.value)
        return (fix2);
    return (fix1);
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1.value >= fix2.value)
        return (fix2);
    return (fix1);
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
    if (fix1.value >= fix2.value)
        return (fix1);
    return (fix2);
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1.value >= fix2.value)
        return (fix1);
    return (fix2);

}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}