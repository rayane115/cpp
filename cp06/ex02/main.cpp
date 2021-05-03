#include <iostream>
#include <string>
#include <cstdlib>


class Base
{
    public:
        virtual ~Base();
};

class A:public Base{};
class B:public Base{};
class C:public Base{};

Base::~Base()
{
}

void identify_from_pointer(Base * p)
{
    /*on verifie si le downcast est possible, type plus precis vers type moin precis .
    si le dynamic cast ne reussi pas c'est qu'il ne correspond pas au type reel de (p)
    qui a ete instancier ds la fonction generate */
    A * instance_a = dynamic_cast<A*>(p);
    if (instance_a != NULL)
    {
        std::cout << "A"  << std::endl;
    }
    /*********************/
    B * instance_b = dynamic_cast<B*>(p);
    if (instance_b != NULL)
    {
        std::cout << "B" << std::endl;
    }
    /**********************/
    C * instance_c = dynamic_cast<C*>(p);
    if (instance_c != NULL)
    {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference( Base & p)
{
    /*meme chose que en haut sauf que pour avoir moin de ligne
    et ne pas faire appel au exeption j'ai opter directement 
    a fait le cast dans le if , petite astuce*/
   	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
}


Base * generate(void)
{
    /*genere aleatoirement un index */
    srand((unsigned int)time(0));
    Base *instance = NULL;
    int index = rand() % 3 +1;
    if (index == 1)
    {
        std::cout << "je suis le A" << std::endl;
        instance = new A();
    }
    
    else if (index == 2)
    {
        std::cout << "je suis le B" << std::endl;
        instance = new B();
    }

    else
    {
        std::cout << "je suis le C" << std::endl;
        instance = new C();
    }
    
    return (instance);
}

int main()
{
    Base *inst;

    inst = generate();
    std::cout << "/**********Pointeur*************/" << std::endl;
    identify_from_pointer(inst);
    std::cout << "/**********Reference*************/" << std::endl;
    identify_from_reference(*inst);


    delete inst;
}