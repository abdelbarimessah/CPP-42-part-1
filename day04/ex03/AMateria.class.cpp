
#include <iostream>
#include "../includes/AMateria.class.hpp"

AMateria::AMateria() {}
AMateria::~AMateria() {}
AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria& src) // canonical copy constructor
{
	*this = src;
}

AMateria&	AMateria::operator=(const AMateria &rhs) // canonical assignment constructor
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
	{
		std::cout
			<< "* shoots an ice bolt at "
			<< target.getName() << " *"
		<< std::endl;
	}
	else if (this->_type == "cure")
	{
		std::cout
			<< "* heals "
			<< target.getName() << "'s wounds *"
		<< std::endl;
	}
}
