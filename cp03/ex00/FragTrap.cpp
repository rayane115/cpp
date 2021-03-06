#include "FragTrap.hpp"


FragTrap::~FragTrap(){
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

FragTrap::FragTrap(std::string name)
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
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attaque simple " << target << " et lui enleve "
				<< _rangeAttack << " de point de vie !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _name << ": attaque avec une melee " << target << " et lui enleve "
				<< _meleeAttack << " de point de vie !" << std::endl;
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

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
	{
		std::cout << _name << " est mort car jesus est le plus grand" << std::endl;
		_hitPoints = 0;
		exit(0);
	}
	std::cout << "FR4G-TP " << _name << ": il lui reste " << _hitPoints
		<< " point de vie" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) > _maxHit)
		_hitPoints = _maxHit;
	else 
		_hitPoints += amount;
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "FR4G-TP " << _name << ": recupere " << amount
		<< " points d'energy, pret pour la bagarre!" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{

	if (_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << _name << " n'as pas assez d'energy faut boir du jus multivitamin?? !"
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

int FragTrap::getEnergyPoints(){ return _energyPoints;};