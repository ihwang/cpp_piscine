#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    int value;
    static const int fractional = 8;

    public:
        Fixed(void);
        Fixed(int nb);
        Fixed(float nb);
        Fixed(const Fixed& f);
        ~Fixed(void);

        Fixed& operator=(const Fixed& f);
        bool operator>(const Fixed& f);
        bool operator<(const Fixed& f);
        bool operator>=(const Fixed& f);
        bool operator<=(const Fixed& f);
        bool operator==(const Fixed& f);
        bool operator!=(const Fixed& f);
        Fixed operator+(const Fixed& f);
        Fixed operator-(const Fixed& f);
        Fixed operator*(const Fixed& f);
        Fixed operator/(const Fixed& f);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static Fixed& min(Fixed& fix1, Fixed& fix2);
        static const Fixed& min(const Fixed& fix1, const Fixed& fix2);
        static Fixed& max(Fixed& fix1, Fixed& fix2);
        static const Fixed& max(const Fixed& fix1, const Fixed& fix2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);