

#include <iostream>
#include "../includes/AMateria.class.hpp"
#include "../includes/Cure.class.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& src) : AMateria(src)
{
	*this = src;
}

Cure& Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return *this;
}

AMateria* Cure::clone() const
{
	Cure* ptrCure;
	ptrCure = new Cure;
	return ptrCure;
	// return new Cure(*this);
}
