
#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();
    void    setZombieType(std::string type);
    Zombie				*newZombie(std::string name);
    Zombie              *randomChump();
    std::string			getZombieType() const;





private:
    std::string     type;
};

#endif