
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"


int main()
{
    /* premiere partie je regarde si a chaque fois que je cree un marine il sajoute a mon squad */
    ISpaceMarine* boob = new TacticalMarine;
    ISpaceMarine* bab = new TacticalMarine;
    ISpaceMarine* bib = new TacticalMarine;

    ISquad *vllc = new Squad;


    boob->rangedAttack();
    bab->meleeAttack();
    bib->battleCry();
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    vllc->push(boob);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    vllc->push(bab);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    vllc->push(bib);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;

    ISpaceMarine* zob = new AssaultTerminator;
    ISpaceMarine* zab = new AssaultTerminator;
    ISpaceMarine* zib = new AssaultTerminator;

    zob->rangedAttack();
    zab->meleeAttack();
    zib->battleCry();
    vllc->push(zob);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    vllc->push(zab);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    vllc->push(zib);
    std::cout << "j'ai " << vllc->getCount() << " element de mon unite dans ma list" << std::endl;
    /*deuxieme partie je test le getunit */

    std::cout << zab << std::endl;
    std::cout << vllc->getUnit(4) << std::endl;

    delete vllc;
    std::cout << "----------------------------------------------------" << std::endl;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0;
}