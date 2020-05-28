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

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);