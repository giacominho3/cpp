#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	
	Ice();
	~Ice();
	Ice(std::string const & type);
	Ice(Ice &cs);
	Ice &operator=(Ice &cs);

	Ice*		clone() const;
	void 		use(ICharacter& target);
	std::string	getType();
	void		setType(std::string type);
};

#endif