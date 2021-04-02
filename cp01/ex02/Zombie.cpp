#include "Zombie.hpp"
#include "ZombieEvent.hpp"


Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	/*destructeur avec un message pour dire qu'il est mort*/
    std::cout << this->name << " is dead" << std::endl;
}

void			Zombie::advert()
{
	/*fonction qui affiche le nom le type de correspondant a l'objet Zombie*/
	std::cout << this->name <<" " << this->type << " Je vais vous mangerrrrrrrr" << std::endl;
	return ;
}

void			Zombie::setName(std::string str)
{
	/*on affecte la string a la variable name*/
	this->name = str;
  //  std::cout << this->name << std::endl;
	return ;
}

void			Zombie::setType(std::string str)
{
	/*on affecte la string a la variable type*/
	this->type = str;
    //std::cout << this->type << std::endl;
	return ;
}

void			Zombie::announce()
{
	std::cout << this->name <<" " << this->type << " J'annonce que c'est partit pour la graille" << std::endl;
	return ;
}


