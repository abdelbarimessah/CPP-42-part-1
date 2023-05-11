#ifndef _FIXED_HPP
#define _FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed{
private:
    int n_fix;
    static const int frac_bits = 8;
public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed & fix);
    Fixed &operator = (Fixed const &fix);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const; 
};

std:: ostream & operator<< (std::ostream & os, Fixed const & fix);

#endif