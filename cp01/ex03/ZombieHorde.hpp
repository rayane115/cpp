#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"
# include <cstdlib>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();
    void    announce(int n);
    void    free(int n);


private:
    int nb_zombie;
    Zombie  *z;

};

#endif