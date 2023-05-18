
#pragma once

#include "AMateria.class.hpp"

class Character : public ICharacter
{

	public:

		Character();
		Character(const Character& src);
		Character&	operator=(const Character& rhs);
		~Character();

		Character(std::string const & name);

		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:

		void		_trash(AMateria* m);
		std::string	_name;
		AMateria*	_m[4];
		AMateria*	_mtrash;
		void		_init_class();
		
};
