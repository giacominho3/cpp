#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	
	Cure();
	~Cure();
	Cure(std::string const & type);
	Cure(Cure &cs);
	Cure &operator=(Cure &cs);

	Cure*		clone() const;
	void 		use(ICharacter& target);
	std::string	getType();
	void		setType(std::string type);
};

#endif