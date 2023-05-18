
#pragma once

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:

		Ice(); // canonical default constructor
		Ice(const Ice& src); // canonical copy constructor
		Ice& operator=(const Ice& rhs); // canonical assignment constructor
		virtual ~Ice(); // canonical destructor
		
		AMateria* clone() const;
};
