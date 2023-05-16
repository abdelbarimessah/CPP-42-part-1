#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other) :Animal(other)
{
    std::cout << "Dog copy constructr called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}