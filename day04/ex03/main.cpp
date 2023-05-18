

#include <iostream>
#include "../includes/AMateria.class.hpp"
#include "../includes/ICharacter.class.hpp"
#include "../includes/Character.class.hpp"
#include "../includes/Cure.class.hpp"
#include "../includes/Ice.class.hpp"
#include "../includes/MateriaSource.class.hpp"
#include "../includes/IMateriaSource.class.hpp"


int main() // from subject
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

// int main() // Additional Tests 1
// {
// 	IMateriaSource* src = new MateriaSource();

// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Cure());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	me->unequip(1);
// 	me->unequip(2);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete bob;
// 	delete me;
// 	delete src;

// 	return 0;
// }

// int main() // Additional Tests 2
// {
// 	std::cout << "\x1B[34m" << "\n##### MY TEST #####\n" << "\x1B[0m" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	std::cout << "\n### LEARN 5 Materias (one too much) ###" << std::endl;
	
// 	for (int i = 0; i < 5; i++)
// 		src->learnMateria(new Ice());
	
// 	std::cout << "\n### CREATE new Character ###" << std::endl;
	
// 	Character *me = new Character("me");
// 	AMateria* tmp;
	
// 	std::cout << "\n### EQUIP 5 Materias (one too much) ###" << std::endl;
	
// 	for (int i = 0; i < 5; i++)
// 	{
// 		tmp = src->createMateria("ice");
// 		me->equip(tmp);
// 	}
// 	delete tmp;
	
// 	std::cout << "\n### CREATE new Character ###" << std::endl;
	
// 	Character *bob = new Character("bob");
// 	*bob = *me;
// 	delete me;
// 	ICharacter *santa = new Character("santa");
// 	std::cout << "\n### USE 5 Materias (one too much) ###" << std::endl;
// 	bob->use(0, *santa);
// 	bob->use(1, *santa);
// 	bob->use(2, *santa);
// 	bob->use(3, *santa);
// 	bob->use(4, *santa);
// 	std::cout << "\n### Starting destruction... ###" << std::endl;
// 	delete src;
// 	delete santa;
// 	delete bob;
// 	return 0;
// }
