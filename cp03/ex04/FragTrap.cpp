#include "FragTrap.hpp"


FragTrap::~FragTrap(){
	std::cout << "Destruction off FR4G-TP " << _name << std::endl;
}

FragTrap::FragTrap(){
}

FragTrap::FragTrap(FragTrap const &other)
{
    *this = other;
}

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    _name = name;
    _hitPoints = 100; 
	_maxHit = 100; 
	_energyPoints = 100; 
	_maxEnergy = 100;
	_level = 1;
	_meleeAttack = 30; 
	_rangeAttack = 20;
	_armorDamage = 5;
	std::cout << "Building off FR4G-TP " << _name << std::endl;
}

void	FragTrap::sniperAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attaque avec un sniper " << target << " et lui enleve "
				<< 15 << " de point de vie !" << std::endl;
}

void	FragTrap::laserAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attaque avec un laser " << target << " et lui enleve "
				<< 13 << " de point de vie !" << std::endl;
}

void	FragTrap::rocketAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attaque avec une rocket " << target << " et lui enleve "
				 << "10 de point de vie !" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{

	if (_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << _name << " n'as pas assez d'energy faut boir du jus multivitaminé !"
			<< std::endl;
	}
	if (this->getEnergyPoints() < 25)
        this->beRepaired(40);
	_energyPoints -= 25;
	int index = rand() % 5;
    switch (index)
    {
        case 0:
            this->rangedAttack(target);
            return (_rangeAttack);
       case 1:
            this->meleeAttack(target);
            return (_meleeAttack);
		case 2:
            this->sniperAttack(target);
            return (15);
        case 3:
            this->laserAttack(target);
            return (13);
        case 4:
            this->rocketAttack(target);
            return (10);
    }
	return (0);
}

void	FragTrap::setEnergyPoint(int amount)
{
	if ((_energyPoints + amount) > (int)_maxEnergy)
		_energyPoints = _maxEnergy;
	if ((_energyPoints + amount) < 0)
		_energyPoints = 0;
	else 
		_energyPoints += amount;
	if (amount > 0)
		std::cout << "FR4G-TP " << _name << ": has been repaired of " << amount
			<< " energy points, ready to fight again!" << std::endl;
	if (amount < 0)
		std::cout << _name << ": get " << amount
			<< " energy points, sorry :p " << std::endl;
	if (_energyPoints > 100)
		_energyPoints = 100;
}

void			FragTrap::attackJesus(FragTrap & Jesus)
{
	std::cout << this->_name << "met une baffe a " << Jesus._name << " .Il perd donc 30 d'energie" << std::endl;
	Jesus._energyPoints -= 30;
	std::cout << Jesus._name << " se retrouve a " << Jesus._energyPoints << "point d'energy" << std::endl;
}