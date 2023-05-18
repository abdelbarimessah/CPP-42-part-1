

#pragma once

#include <iostream>
#include "AMateria.class.hpp"

class AMateria;

class ICharacter // pure abstract class (interface)
{

	public:

		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0; // pure virtual function
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};
