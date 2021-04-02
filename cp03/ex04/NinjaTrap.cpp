#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap(std::string name):ClapTrap(name)
{
	std::cout << "Building off NINJ4-TP " << name << std::endl;
	_hitPoints = 60;
	_maxHit = 60;
	_energyPoints = 120;
	_maxEnergy = 120;
	_level = 1;
	_meleeAttack= 60;
	_rangeAttack = 5;
	_armorDamage = 0;
}

NinjaTrap::NinjaTrap( const NinjaTrap & src )
{
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destruction off NINJ4-TP " << _name << std::endl;
}

NinjaTrap &		NinjaTrap::operator=( NinjaTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_maxHit = rhs._maxHit;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergy = rhs._maxEnergy;
		this->_level = rhs._level;
		this->_meleeAttack = rhs._meleeAttack;
		this->_rangeAttack = rhs._rangeAttack;
		this->_armorDamage = rhs._armorDamage;
	}
	return *this;
}

void			NinjaTrap::ninjaShoebox(ClapTrap &rohff)
{
	std::cout << "NINJ4-TP " << _name << ": a casser la gueul a "
		<< rohff.getName() << std::endl;
	rohff.takeDamage(7);	
}

void			NinjaTrap::ninjaShoebox(FragTrap &booba)
{
	std::cout << "NINJ4-TP " << _name << ": a casser la gueul a "
		<< booba.getName() << std::endl;
	booba.takeDamage(7);
}

void			NinjaTrap::ninjaShoebox(ScavTrap &pnl)
{
	std::cout << "NINJ4-TP " << _name << ": a casser la gueul a "
		<< pnl.getName() << std::endl;
	pnl.takeDamage(7);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &orichimaru)
{
	std::cout << "NINJ4-TP " << _name << ": a casser la gueul a "
		<< orichimaru.getName() << std::endl;
	orichimaru.takeDamage(7);
}
