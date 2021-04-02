#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
}

Enemy::Enemy( const Enemy & src )
{
	*this = src;
	return ;
}

Enemy::~Enemy()
{
}

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();

	}
	return *this;
}

std::string  const Enemy::getType()const{return _type;}
int Enemy::getHP()const{return _hp;}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
	return ;
}