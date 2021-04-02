#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	
}
ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 0;
    _maxHit = 0;
	_energyPoints = 0; 
    _maxEnergy = 0; 
    _level = 0;
	_meleeAttack = 0; 
    _rangeAttack = 0; 
    _armorDamage = 0;
	std::cout << "constructeur claptrap" << _name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & other )
{
	*this = other;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destruction off claptrap " << _name << std::endl;
}

ClapTrap &				ClapTrap::operator=(ClapTrap const & rhs)
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

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CLAP-trap " << _name << ": met un coup de tete a " << target
		<< " il perd donc " << _rangeAttack << " points !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CLAPTRAP " << _name << ": met une attack de melee " << target
		<< " perd donc" << _meleeAttack << " points de vie !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
		_hitPoints = 0;
	std::cout << "CLAPTRAP " << _name << ": il lui reste alors " << _hitPoints
		<< " point de vie" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) > _maxHit)
		_hitPoints = _maxHit;
	else 
		_hitPoints += amount;
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "CLAPTRAP " << _name << ": recupere " << amount
		<< " points, pret ma gueul!" << std::endl;
}

std::string ClapTrap::getName(){ return _name;}
int ClapTrap::getHitPoints(){ return _hitPoints;}
unsigned int ClapTrap::getMaxHitPoints(){ return _maxHit;}
int ClapTrap::getEnergyPoints(){ return _energyPoints;}
unsigned int ClapTrap::getMaxEnergyPoints(){ return _maxEnergy;}
int ClapTrap::getLevel(){ return _level;}
int ClapTrap::getMeleeAttackDamage(){ return _meleeAttack;}
int ClapTrap::getRangedAttackDamage(){ return _rangeAttack;}
int ClapTrap::getArmorDamageReduction(){ return _armorDamage;}