#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->brain  = new Brain();
    this->type = "Cat";
}

Cat::~Cat()
{
    delete this->brain;
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
        this->brain = new Brain(*other.brain);
        type = other.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}