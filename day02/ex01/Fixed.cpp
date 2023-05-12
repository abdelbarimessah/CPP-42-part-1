/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 00:48:40 by amessah           #+#    #+#             */
/*   Updated: 2023/05/12 00:48:40 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->n_fix = 0;
}

Fixed::Fixed(const Fixed & fix){
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num){
    std::cout << "Int constructor called" << std::endl;
    this->n_fix = num << frac_bits;
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called" << std::endl;
    this->n_fix = (int)roundf(raw * (1 << frac_bits));
}

Fixed& Fixed:: operator= (Fixed const &fix){
    std::cout << "Copy assignment operator called" << std::endl;
    this->n_fix = fix.n_fix;
    return *this;
}

int Fixed::getRawBits(void) const{
    return (this->n_fix);
}

void Fixed::setRawBits(int const raw){
    this->n_fix = raw;
}

float Fixed::toFloat() const{
    return (float)this->getRawBits() / (1 << frac_bits);
}

int Fixed::toInt() const{
    return (int)this->getRawBits() / (1 << frac_bits);
}

std::ostream & operator<< (std::ostream & os, Fixed const & fix)
{
    os << fix.toFloat();
    return os;
}