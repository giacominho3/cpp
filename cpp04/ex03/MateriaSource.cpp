#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		materie[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	// for (int i = 0; i < 4; i++)
	// 	delete materie[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator= (MateriaSource& uguale)
{
	for (int i = 0; i < 4; i++)
	{
		if (materie[i])
		{
			delete materie[i];
			materie[i] = NULL;
		}
		materie[i] = uguale.materie[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(!materie[i])
		{
			materie[i] = materia->clone();
			if (materia)
				delete materia;
			return;
		}
	}
	if (materia)
		delete materia;
	std::cout << "Full slots" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if(materie[i] && materie[i]->getType() == type)
				return (materie[i]);
	return nullptr;
}