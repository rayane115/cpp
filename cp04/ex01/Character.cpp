#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name): _name(name), _ap(40)
{
}

Character::Character( const Character & src )
{
	*this = src;
	return ;
}

Character::~Character()
{
}

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
		this->_currentWeapon = rhs.getWeapon();
	}
	return *this;
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
	return ;
}

void Character::equip(AWeapon* weapon)
{
	if (_ap > 0)
		_currentWeapon = weapon;
	return ;
}

void Character::attack(Enemy* enemy)
{
    /*securite au cas ou l'arme n'a pas assez de point d'action ou si il n' y a aucune arme */
	if (_ap < _currentWeapon->getAPCost() || !_currentWeapon)
		return;
    /*point d'action - les points d'action de l'arme utiliser */
	_ap -= _currentWeapon->getAPCost();
    /*message d'attaque*/
	std::cout << _name <<" attacks " << enemy->getType() << " with a "
		<< _currentWeapon->getName() << std::endl;
    /*appel de la fonction virtual attack se trouvant a l'arme associe*/
	_currentWeapon->attack();
    /*l'ennemie perd les dommage avec l'arme actuel */
	enemy->takeDamage(_currentWeapon->getDamage());
    /*si l'ennemie n'a plus de vie il meurt , appel du destructeur */
	if (enemy->getHP() < 0)
		enemy->~Enemy();
	return ;
}

std::ostream &			operator<<( std::ostream & flux, Character const & ins )
{
	if (!ins.getWeapon())
		flux <<  ins.getName() << " has " << ins.getAP() << " AP and is unarmed"
			<< std::endl;
	else
		flux <<  ins.getName() << " has " << ins.getAP() << " AP and wields a "
			<< ins.getWeapon()->getName() << std::endl;
	return flux;
}

std::string  const Character::getName()const{return _name;}
int Character::getAP()const{return _ap;}
AWeapon *Character::getWeapon()const{return _currentWeapon;}