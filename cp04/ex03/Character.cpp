
#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name): _name(name), _nb_materia(0)
{
    for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
}

Character::Character( const Character & src )
{
	*this =src;
}

Character::~Character()
{
   	for (int i = 0; i < 4; i++)
		delete _inventaire[i];
}

Character &	Character::operator=( Character const & rhs )
{
	_name = rhs.getName();
    for(int i = 0 ; i < 4 ; i++)
        _inventaire[i] = NULL;
    for (int i = 0 ; i < 4 ; i++)
        _inventaire[i] = rhs._inventaire[i];
	return *this;
}

std::string const & Character::getName() const{return _name;}

void Character::equip(AMateria* m)
{
	if (_nb_materia < 4 && m)
	{
		_inventaire[_nb_materia] = m;
		_nb_materia++;
	}
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3 || _inventaire[idx] == NULL)
		return ;

	for (int i = idx; i < 3; i++)
	{
		_inventaire[i] = _inventaire[i + 1];
		_inventaire[i + 1] = NULL;
	}
	_nb_materia--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3 || _inventaire[idx] == NULL)
		return ;
    _inventaire[idx]->use(target);
}