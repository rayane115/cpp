#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"


int     main(void)
{
    /*FragTrap gentil("Jesus");
    FragTrap mechant("freddy");
    ScavTrap leSage("perre fourat");

    mechant.attackJesus(gentil);
    leSage.rangedAttack("freddy");
    leSage.challengeNewcomer(gentil);
    int i(0);
    while(i++ < 4)
        mechant.takeDamage(gentil.vaulthunter_dot_exe("freddy"));
    NinjaTrap   sasuke("sasuke");
    NinjaTrap   orichimaru("orichimaru");
    ClapTrap    rohff("rohff");
    FragTrap    booba("booba");
    ScavTrap    pnl("pnl");
    sasuke.ninjaShoebox(rohff);
    sasuke.ninjaShoebox(booba);
    sasuke.ninjaShoebox(pnl);
    sasuke.ninjaShoebox(orichimaru);*/
    SuperTrap toto("toto");
    toto.FragTrap::sniperAttack("sarco");
    toto.rocketAttack("bouble");
    toto.rangedAttack("lulu");
    toto.meleeAttack("escobar");
    
    return (0);
}