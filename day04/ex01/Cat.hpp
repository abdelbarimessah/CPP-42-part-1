#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *brain;
    public:
        Cat();
        Cat(Cat const &other);
        Cat &operator=(Cat const &other);
        void makeSound() const;
        ~Cat();
};




#endif