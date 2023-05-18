#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->brain = new Brain();
    type = "Dog";
}

Dog::~Dog()
{
    delete this->brain;
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
        this->brain = new Brain(*other.brain);
        type = other.type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}