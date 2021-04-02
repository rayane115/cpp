#ifndef HUMANB
# define HUMANB

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public :
		HumanB(std::string _name);
		void			attack();
		void			setWeapon(Weapon &_weapon);
	private :
		std::string		name;
		Weapon			*weapon;
};

#endif