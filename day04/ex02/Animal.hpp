#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &other);
        Animal &operator=(Animal const &other);
        std::string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
};


#endif