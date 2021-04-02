#include "Bureaucrat.hpp"

int main(void)
{
    
    try
    {
        Bureaucrat test("toto", -1);
        std::cout << test;
        //test.decrease();
        //test.increase();
    
    }

    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl ;
    }



    return 0;
}