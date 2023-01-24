#include "AMateria.hpp"

AMateria::AMateria()
{
	;
}

AMateria::~AMateria()
{
	;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria &cs)
{
	*this = cs;
}

AMateria &AMateria::operator=(AMateria &cs)
{
	this->_type = cs._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::setType(std::string type)
{
	this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}