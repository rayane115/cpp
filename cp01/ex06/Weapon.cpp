
#include "Weapon.hpp"



Weapon::Weapon(std::string str_type)
{
    /*constructeur qui initialise le type */
    type = str_type;
}

Weapon::~Weapon()
{}

void Weapon::setType(std::string newtype)
{
    /*fonction settype qui donne un nouveu type*/
    type = newtype;
}

const std::string &Weapon::getType()
{
    /*gettype qui initalise une reference et renvoi cette reference */
    std::string &ref = type;
    return (ref);
}
