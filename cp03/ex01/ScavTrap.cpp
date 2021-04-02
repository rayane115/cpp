#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _maxHit = 100;
	_energyPoints = 50; 
    _maxEnergy = 50; 
    _level = 1;
	_meleeAttack = 20; 
    _rangeAttack = 15; 
    _armorDamage = 3;
	std::cout << "Building off SCR4V-TP " << _name << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destruction off SCR4V-TP " << _name << std::endl;
}

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCR4V-TP " << _name << ": met un coup de tete a " << target
		<< " il perd donc " << _rangeAttack << " points !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCR4V-TP " << _name << ": met une attack de melee " << target
		<< " perd donc" << _meleeAttack << " points de vie !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount == 0)
		return ;
	_hitPoints -= (amount - _armorDamage);
	if (_hitPoints < 1)
		_hitPoints = 0;
	std::cout << "SCR4V-TP " << _name << ": il lui reste alors " << _hitPoints
		<< " point de vie" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((_hitPoints + amount) > _maxHit)
		_hitPoints = _maxHit;
	else 
		_hitPoints += amount;
	if ((_energyPoints+ amount) > _maxEnergy)
		_energyPoints = _maxEnergy;
	else 
		_energyPoints += amount;
	std::cout << "SCR4V-TP " << _name << ": recupere " << amount
		<< " points, pret ma gueul!" << std::endl;
}

int	ScavTrap::challengeNewcomer(FragTrap & target)
{
	srand (time(NULL));
    std::string input;
    char const *reponse[] = {"celine dion", "aladdin", "gta"};
	unsigned int energy[] = {4,10,50};
	int index = rand() % 3;
	std::cout << "SCR4V-TP " << _name << ": interroge " << target.getName() << "pour savoir si il est digne d'attaquer freddy" <<  std::endl;
    while(1){
        if (index == 0){
            std::cout << "Qui est la chanteuse du film Titanic ? " << std::endl;
            std::getline(std::cin, input);
            if (input == reponse[0])
            {
                std::cout << "Bravo" << std::endl ;
            }
            else
            {
                std::cout << "Erreur" << std::endl;
                continue;
            }
        }
        if (index == 1){
            std::cout << "Qui est le prince de la princesse Jasmine dans le fameux Wald disney ? " << std::endl;
            std::getline(std::cin, input);
            if (input == reponse[1])
            {
                std::cout << "Bravo" << std::endl ;
            }
            else
            {
                std::cout << "Erreur" << std::endl;
                continue;
            }
        }
        if (index == 2){
            std::cout << "Quel est le jeu video ou on peut tout faire, voler des voiture ...? " << std::endl;
            std::getline(std::cin, input);
            if (input == reponse[2])
            {
                std::cout << "Bravo" << std::endl ;
            }
            else
            {
                std::cout << "Erreur" << std::endl;
                continue;
            }
        }
        std::cin.clear();
        break;
    }

	std::cout << "FR4G-TP " << target.getName() << ": gagne le défi et est recompensé par "
		<< energy[index] << " points" << std::endl;
	target.setEnergyPoint(energy[index]);
    std::cout << "l'energie de " << target.getName() << " est maintenant a " << target.getEnergyPoints() << std::endl;
	return (0);
}

std::string ScavTrap::getName(){ return _name;}
int ScavTrap::getHitPoints(){ return _hitPoints;}
unsigned int ScavTrap::getMaxHitPoints(){ return _maxHit;}
int ScavTrap::getEnergyPoints(){ return _energyPoints;}
unsigned int ScavTrap::getMaxEnergyPoints(){ return _maxEnergy;}
int ScavTrap::getLevel(){ return _level;}
int ScavTrap::getMeleeAttackDamage(){ return _meleeAttack;}
int ScavTrap::getRangedAttackDamage(){ return _rangeAttack;}
int ScavTrap::getArmorDamageReduction(){ return _armorDamage;}