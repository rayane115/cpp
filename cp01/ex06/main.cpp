#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("pistolet");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("bate");
        bob.attack();
    }
    {
        Weapon club = Weapon("couteau");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("club");
        jim.attack();
    }
}