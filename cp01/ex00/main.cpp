#include "Pony.hpp"

void    ponyOnTheStack(void)
{
    /*cree une instance pony sur la stack , lui donne un nom et lui fait faire des actions*/
    Pony poney1;

    poney1.setName("pablo");
    poney1.run();
    poney1.jump();
}

void    ponyOnTheHeap(void)
{
    /*cree une instance pony sur la heap , lui donne un nom et lui fait faire des actions*/
    Pony* poney2 = new Pony();

    poney2->setName("escobar");
    poney2->run();
    poney2->jump();
    delete poney2;
}

int main(void)
{
    std::cout << " on the stack " << std::endl;
    ponyOnTheStack();
    std::cout << " on the heap " << std::endl;
    ponyOnTheHeap();
}