#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int     main(void)
{
    FragTrap gentil("Jesus");
    FragTrap mechant("freddy");
    ScavTrap leSage("perre fourat");

    mechant.attackJesus(gentil);
    leSage.rangedAttack("freddy");
    leSage.challengeNewcomer(gentil);
    leSage.getMaxEnergyPoints();
    std::cout << "-----------------------" << std::endl;
    int i(0);
    while(i++ < 4)
        mechant.takeDamage(gentil.vaulthunter_dot_exe("freddy"));
    return (0);
}