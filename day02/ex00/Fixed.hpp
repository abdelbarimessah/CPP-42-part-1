#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int fix_number;
        static const int fractional_bits;
    public:
        Fixed();
        Fixed(const Fixed &fix);
        Fixed &operator = (Fixed const &fix);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        ~Fixed();
};


#endif