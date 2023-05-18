#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    *this = other;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &other)
{
    if(this != &other){
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "Wrong sound" << std::endl;
}