#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Other.hpp"


int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;

/*
    std::cout << "------------------------" << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim *other = new Other("Sam gamji");
    Victim jim("Jimmy");
    Peon joe("Joe");*/

    /*presentation de tout le monde */
  /*  std::cout << robert << jim << joe << *other;

    robert.polymorph(jim);
    robert.polymorph(*other);
    robert.polymorph(joe);
    delete other;
    return 0;*/
}