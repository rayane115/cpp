#include "Zombie.hpp"


Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << this->name << " is dead" << std::endl;
}

void			Zombie::advert()
{
	std::cout << this->name <<" " << this->type << " Je vais vous mangerrrrrrrr" << std::endl;
	return ;
}

void			Zombie::setName(std::string str)
{
	this->name = str;
    std::cout << this->name << std::endl;
	return ;
}

void			Zombie::setType(std::string str)
{
	this->type = str;
    //std::cout << this->type << std::endl;
	return ;
}

void			Zombie::announce()
{
	std::cout << this->name <<" " << this->type << " J'annonce que c'est partit pour la graille" << std::endl;
	return ;
}


