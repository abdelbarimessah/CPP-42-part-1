#include "Fixed.hpp"

int Power_calcul(int num, int pow){
    int ret = 1;
    int i = 0;
    while(i < pow){
        ret *= num;
        i++;
    }
    return (ret);
}

Fixed::Fixed(){
    this->n_fix = 0;
}

Fixed::Fixed(const int num){
    this->n_fix = num * Power_calcul(2, this->frac_bits);
}

Fixed::Fixed(const float num){
    this->n_fix = roundf(num * Power_calcul(2, this->frac_bits));
}

Fixed::Fixed(const Fixed & fix){
    this->n_fix = fix.getRawBits();
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
    return (this->n_fix);
}

void Fixed::setRawBits(int const raw){
    this->n_fix = raw;
}

float Fixed::toFloat() const{
    return ((float) this->getRawBits()) / Power_calcul(2, this->frac_bits);
}

int Fixed::toInt() const{
    return (this->getRawBits() / Power_calcul(2, this->frac_bits));
}

std::ostream & operator<< (std::ostream & os, Fixed const & fix){
    os << fix.toFloat();
    return os;
}

Fixed& Fixed:: operator= (Fixed const &fix){
    this->n_fix = fix.getRawBits();
    return *this;
}

bool Fixed:: operator> (Fixed const &fix){
    return this->getRawBits() > fix.getRawBits();
}

bool Fixed:: operator< (Fixed const &fix){
    return this->getRawBits() < fix.getRawBits();
}

bool Fixed:: operator<= (Fixed const &fix){
    return this->getRawBits() <= fix.getRawBits();
}

bool Fixed:: operator>= (Fixed const &fix){
    return this->getRawBits() >= fix.getRawBits();
}

bool Fixed:: operator== (Fixed const &fix){
    return this->getRawBits() == fix.getRawBits();
}

bool Fixed:: operator!= (Fixed const &fix){
    return this->getRawBits() != fix.getRawBits();
}

Fixed Fixed::operator+(Fixed const &fix){
    return Fixed(this->toFloat() + fix.toFloat());
}

Fixed Fixed::operator-(Fixed const &fix){
    return Fixed(this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator*(Fixed const &fix){
    return Fixed(this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(Fixed const &fix){
    return Fixed(this->toFloat() / fix.toFloat());
}

Fixed & Fixed::operator++(){
    this->n_fix++;
    return *this;
}

Fixed & Fixed::operator--(){
    this->n_fix--;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed fix;
    fix = *this;
    ++*this;
    return fix;
}

Fixed Fixed::operator--(int){
    Fixed fix;
    fix = *this;
    --*this;
    return fix;
}

Fixed &Fixed::max(Fixed &f1,  Fixed &f2){
    if(f1 > f2){
        return f1;
    }
    else{
        return f2;
    }
}

Fixed &Fixed::min(Fixed &f1,  Fixed &f2){
    if(f1 < f2){
        return f1;
    }
    else{
        return f2;
    }
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2){
    if((Fixed)f1 > f2){
        return f1;
    }
    else{
        return f2;
    }
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2){
    if((Fixed)f1 > f2){
        return f1;
    }
    else{
        return f2;
    }
}
