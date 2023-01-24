#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::~Ice()
{
	;
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
	this->setType(type);
}

Ice::Ice(Ice &cs)
{
	*this = cs;
}

Ice &Ice::operator=(Ice &cs)
{
	this->_type = cs._type;
	return (*this);
}

std::string	Ice::getType()
{
	return (this->_type);
}

void		Ice::setType(std::string type)
{
	this->_type = type;
}

Ice*	Ice::clone() const
{
	Ice	*c = new Ice();
	return (c);
}

void 	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}