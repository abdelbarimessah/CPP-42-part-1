#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria& src); 
		AMateria&	operator=(const AMateria& rhs); 
		virtual ~AMateria();
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria * clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};

#endif