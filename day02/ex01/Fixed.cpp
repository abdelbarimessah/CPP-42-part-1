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
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called" << std::endl;
    this->n_fix = num * Power_calcul(2, this->frac_bits);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->fix_p = (int)roundf(raw * (1 << frac_bits));
}

Fixed::Fixed(const Fixed & fix){
    this->n_fix = fix.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed:: operator= (Fixed const &fix){
    this->n_fix = fix.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

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
    return ((int)this->getRawBits() / Power_calcul(2, this->frac_bits));
}

std::ostream & operator<< (std::ostream & os, Fixed const & fix){
    os << fix.toFloat();
    return os;
}