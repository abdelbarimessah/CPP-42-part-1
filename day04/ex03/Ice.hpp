#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		Ice(const Ice& src); 
		Ice& operator=(const Ice& rhs); 
		virtual ~Ice();
		AMateria* clone() const;
};


#endif