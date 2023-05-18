#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const & br){
    *this = br;
}

Brain & Brain::operator= (Brain const & br){
    if(this == &br)
        return *this;
    int i = 0;
    while(i < 100){
        this->ideas[i] = br.ideas[i];
        i++;
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}
std::string *Brain::getIdeas() const{
    return (std::string *)(this->ideas);
}