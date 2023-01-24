#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_slot[4];
		
	public:
		Character();
		Character(std::string const & name);
		Character(Character &cs);
		~Character();

		Character &operator=(Character &cs);

		std::string const & getName() const;
		void				setname(std::string name);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		void				printSlot();
};

#endif