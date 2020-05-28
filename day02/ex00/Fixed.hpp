#pragma once

#include <iostream>

class Fixed
{
    int value;
    static const int fractional = 8;

    public:
        Fixed(void);
        Fixed(const Fixed& f);
        ~Fixed(void);

        Fixed& operator=(const Fixed& f);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};