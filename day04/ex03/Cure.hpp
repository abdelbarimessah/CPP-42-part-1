#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& src);
		Cure& operator=(const Cure& rhs); 
		virtual ~Cure();
		AMateria* clone() const;
};

#endif