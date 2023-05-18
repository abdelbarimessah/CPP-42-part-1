

#include "../includes/MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	_init_memory();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_memory[i] != NULL)
		{
			delete _memory[i];
		}
}

MateriaSource::MateriaSource(const MateriaSource & src) : IMateriaSource(src)
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = src._memory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i] != NULL)
		{
			delete this->_memory[i];
			this->_memory[i] = NULL;
		}
		if (rhs._memory[i] != NULL)
			this->_memory[i] = rhs._memory[i]->clone();
		else
			this->_memory[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (_memory[i] == NULL)
		{
			_memory[i] = m->clone();
			delete m;
			m = NULL;
			break ;
		}
		i++;
	}
	if (i == 4)
	{	
		std::cout << "\033[34mnot enough memory to implement " << m->getType() << "\033[0m" << std::endl;
		delete m;
		m = NULL;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_memory[i] != NULL && this->_memory[i]->getType() == type)
			return this->_memory[i]->clone();
		i++;
	}
	std::cout << "\033[34m\"" << type << "\"" << " not implemented\033[0m" << std::endl;
	return 0;
}

void	MateriaSource::_init_memory()
{
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
}
