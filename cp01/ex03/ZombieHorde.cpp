#include "ZombieHorde.hpp"
#include "Zombie.hpp"
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

ZombieHorde::ZombieHorde(int n)
{
	nb_zombie = n;
   z = new Zombie[n];
    int i;

    i = 0;
    while (i < n)
    {
        z[i].setName(names[std::rand() % 20]);
        i++;
    }
    
}

ZombieHorde::~ZombieHorde()
{
	if (nb_zombie > 0)
    {
        delete[] z;
    }
}

void ZombieHorde::announce(int n)
{
    for(int i = 0; i < n; i++)
        z[i].announce();
}