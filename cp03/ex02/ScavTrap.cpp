#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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

