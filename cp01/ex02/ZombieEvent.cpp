#include "ZombieEvent.hpp"
#include "Zombie.hpp"



ZombieEvent::ZombieEvent()
{

}

ZombieEvent::~ZombieEvent()
{
    
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*z;

    z = new Zombie();
	z->setName(name);
	z->setType(getZombieType());
	return z;
}

std::string		ZombieEvent::getZombieType() const
{
	return this->type;
}

Zombie          *ZombieEvent::randomChump()
{
    std::string		names[20] =
    {
	"Sabrina",
	"Rayane",
	"Manelle",
	"Zizou",
	"Yamina",
	"Chara",
	"Niya",
	"Mohamed",
	"Jilax",
	"Sofiane",
	"Nasser",
	"Faisal",
	"Said",
	"Rida",
	"Bekatre",
	"Selina",
	"Sabichette",
	"Hakim",
	"Walid",
	"Julien",
    };
    return ZombieEvent::newZombie(names[rand() % (names->size() - 1)]);
}