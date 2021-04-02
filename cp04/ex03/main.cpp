#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

int main()
{
   /* Ice *test = new Ice();

    Character *sangoku = new Character("toto");
    sangoku->equip(test);
    sangoku->use(0, *sangoku);
    */
    /////////////////////////////////////////


    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());

    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    delete bob;
    delete moi;
    delete src;

    return 0;

    
}