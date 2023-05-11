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

    bool operator>(Fixed const & fix);
	bool operator<(Fixed const & fix);
	bool operator>=(Fixed const & fix);
	bool operator<=(Fixed const & fix);
	bool operator==(Fixed const & fix);
	bool operator!=(Fixed const & fix);

	Fixed operator+(Fixed const & fix);
	Fixed operator-(Fixed const & fix);
    Fixed operator*(Fixed const & fix);
	Fixed operator/(Fixed const & fix);

    Fixed & operator++();
	Fixed &	operator--();
	Fixed operator++(int);
	Fixed operator--(int);

    static Fixed &max(Fixed &f1,  Fixed &f2);
    static Fixed &min(Fixed &f1,  Fixed &f2);
    static const Fixed &max(const Fixed &f1, const Fixed &f2);
    static const Fixed &min(const Fixed &f1, const Fixed &f2);
};

std:: ostream & operator<< (std::ostream & os, Fixed const & fix);

#endif