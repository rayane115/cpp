#include "span.hpp"

int main()
{
    try
    {
        std::cout << "\e[31m\e[1m/**************Test simple*************/ " <<  "\e[0m" << std::endl;
        Span sp(6);

        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(9);
        sp.addNumber(1);
        sp.addNumber(4);
		sp.addNumber(18);
		
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

		std::cout << "\e[31m\e[1m/**************Test plage d'int*************/ " <<  "\e[0m" << std::endl;
        Span sp2(1001);

        sp2.addNumber(1, 1000);
        sp2.addNumber(12);    
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;

        std::cout << "\e[31m\e[1m/**************Test simple negatif*************/ " <<  "\e[0m" << std::endl;
        Span sp3(5);

        sp3.addNumber(-5);
        sp3.addNumber(-3);
        sp3.addNumber(-17);
        sp3.addNumber(-9);
        sp3.addNumber(-11);

        std::cout << sp3.shortestSpan() << std::endl;
        std::cout << sp3.longestSpan() << std::endl;

        
    }

    catch(std::string erreur)
    {
        std::cout << erreur << std::endl;
    }
    return (0);
}
