#pragma once

#include "AMateria.class.hpp"
#include "IMateriaSource.class.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource & src);
		MateriaSource& operator=(const MateriaSource & rhs);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria*	_memory[4];
		void		_init_memory();
};
