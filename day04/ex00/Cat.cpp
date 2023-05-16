#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &other) :Animal(other)
{
    *this = other;
    std::cout << "Cat copy constructr called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
    if(this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}