#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *typ1 = new Animal;
    Animal *typ2 = new Cat;
    Animal *typ3 = new Dog;
    WrongAnimal *typ4 = new WrongAnimal;
    WrongAnimal *typ5 = new WrongCat;

    std::cout << typ1->getType() << "\n";
    typ1->makeSound();
    std::cout << typ2->getType() << "\n";
    typ2->makeSound();
    std::cout << typ3->getType() << "\n";
    typ3->makeSound();
    std::cout << typ4->getType() << "\n";
    typ4->makeSound();
    std::cout << typ5->getType() << "\n";
    typ5->makeSound();

    delete typ1;
    delete typ2;
    delete typ3;
    delete typ4;
    delete typ5;
}