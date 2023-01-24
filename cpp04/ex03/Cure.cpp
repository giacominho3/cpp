#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::~Cure()
{
	;
}

Cure::Cure(std::string const & type)
{
	this->_type = type;
	this->setType(type);
}

Cure::Cure(Cure &cs)
{
	*this = cs;
}

Cure &Cure::operator=(Cure &cs)
{
	this->_type = cs._type;
	return (*this);
}

std::string	Cure::getType()
{
	return (this->_type);
}

void		Cure::setType(std::string type)
{
	this->_type = type;
}

Cure*	Cure::clone() const
{
	Cure	*c = new Cure();
	return (c);
}

void 	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}