#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
    *this = other;
}

WrongCat & WrongCat::operator=(WrongCat const &other)
{
    if(this != &other){
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat" << std::endl;
}