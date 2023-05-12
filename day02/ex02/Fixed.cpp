/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 01:05:32 by amessah           #+#    #+#             */
/*   Updated: 2023/05/12 01:05:32 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->n_fix = 0;
}

Fixed::Fixed(const Fixed & fix){
    *this = fix;
}

Fixed::~Fixed(){
}

Fixed::Fixed(const int num){
    this->n_fix = num << frac_bits;
}

Fixed::Fixed(const float raw)
{
    this->n_fix = (int)roundf(raw * (1 << frac_bits));
}

Fixed& Fixed:: operator= (Fixed const &fix){
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

bool Fixed:: operator> (Fixed const &fix){
    return this->toFloat() > fix.toFloat();
}

bool Fixed:: operator< (Fixed const &fix){
    return this->toFloat() < fix.toFloat();
}

bool Fixed:: operator<= (Fixed const &fix){
    return this->toFloat() <= fix.toFloat();
}

bool Fixed:: operator>= (Fixed const &fix){
    return this->toFloat() >= fix.toFloat();
}

bool Fixed:: operator== (Fixed const &fix){
    return this->toFloat() == fix.toFloat();
}

bool Fixed:: operator!= (Fixed const &fix){
    return this->toFloat() != fix.toFloat();
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
