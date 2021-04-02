#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
	this->weapon = NULL;
	return ;
}

void			HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}

void			HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
	return ;
}