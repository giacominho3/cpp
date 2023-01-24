#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:
	std::string _type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &cs);
	virtual ~AMateria();
	AMateria &operator=(AMateria &cs);

	std::string const & getType() const;
	void				setType(std::string type);
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};

#endif