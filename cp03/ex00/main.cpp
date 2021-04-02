#include "FragTrap.hpp"


int     main(void)
{
    FragTrap instance("boby");
    FragTrap instancecopy(instance);
    FragTrap instanceover = instancecopy;
    FragTrap gentil("Jesus");
    FragTrap mechant("freddy");
    while(1)
        mechant.takeDamage(gentil.vaulthunter_dot_exe("freddy"));
    return (0);
}