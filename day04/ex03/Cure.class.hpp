

#pragma once

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:

		Cure(); // canonical default constructor
		Cure(const Cure& src); // canonical copy constructor
		Cure& operator=(const Cure& rhs); // canonical assignment constructor
		virtual ~Cure(); // canonical destructor
		
		AMateria* clone() const;
};