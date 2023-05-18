#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(Animal const &other)
{
     std::cout << "Animal copy constructr called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    if(this != &other)
        type = other.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}