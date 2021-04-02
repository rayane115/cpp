#include "SuperTrap.hpp"


SuperTrap::SuperTrap(){}

SuperTrap::SuperTrap(std::string name):ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	std::cout << "Building off SUPERT-TP " << name << std::endl;
    _name = name;
	_hitPoints = FragTrap::_hitPoints;
	_maxHit = FragTrap::_maxHit;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergy = NinjaTrap::_maxHit;
	_level = 1;
	_meleeAttack= NinjaTrap::_meleeAttack;
	_rangeAttack = FragTrap::_rangeAttack;
	_armorDamage = FragTrap::_armorDamage;
}

SuperTrap::SuperTrap( SuperTrap const & src )
{
	*this = src;
	return ;
}

SuperTrap::~SuperTrap()
{
    std::cout << "destruction SuperTrap " << this->_name << std::endl;
}

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
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

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	
	NinjaTrap::meleeAttack(target);
	NinjaTrap test("oeoeoeoe");
	NinjaTrap::ninjaShoebox(test);
}
