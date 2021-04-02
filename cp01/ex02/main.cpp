#include "Zombie.hpp"
#include "ZombieEvent.hpp"

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

std::string		types[5] =
{
	"Zombie noir",
	"Zombie de walking dead",
	"Zombie gentil",
	"Zombie blanc",
	"Zombie hybrid"
};

int main(void)
{
    srand(time(0));
    Zombie z1;

    z1.setName(names[5]);
    z1.setType(types[1]);
    z1.advert();

    ZombieEvent z2;
    z2.setZombieType(types[3]);
    Zombie  *z22;
    z22 = z2.newZombie(names[6]);
    z22->advert();

    Zombie		*z3;
    z3 = z2.randomChump();
    z3->announce();
    delete(z22);
    delete(z3);


    return (0);
}