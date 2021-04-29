#include "whatever.hpp"

int main()
{
    std::cout << "\e[31m\e[1m/**************Funtion swap*************/ " <<  "\e[0m" << std::endl;
    int o(42);
    int p(64);
    std::cout << "avant le swap : o = " << o << std::endl << "avant le swap : p = " << p << std::endl ;
    swap<int>(o, p);
    std::cout << "apres le swap : o = "  << o << std::endl << "avant le swap : p = " << p << std::endl ;
    std::cout << "--------" << std::endl;
    float r(42.5f);
    float s(64.5f);
    std::cout << "avant le swap : r = " << r << std::endl << "avant le swap : s = " << s << std::endl ;
    swap<float>(r, s);
    std::cout << "apres le swap : r = "  << r << std::endl << "avant le swap : s = " << s << std::endl ;
    std::cout << "--------" << std::endl;
    double t(11.5);
    double u(70.5);
    std::cout << "avant le swap : t = " << t << std::endl << "avant le swap : u = " << u << std::endl ;
    swap<double>(t, u);
    std::cout << "apres le swap : t = "  << t << std::endl << "avant le swap : u = " << u << std::endl ;
    std::cout << "--------" << std::endl;
    char v('*');
    char w('a');
    std::cout << "avant le swap : v = " << v << std::endl << "avant le swap : w = " << w << std::endl ;
    swap<char>(v, w);
    std::cout << "apres le swap : v = "  << v << std::endl << "avant le swap : w = " << w << std::endl ;
    std::cout << "--------" << std::endl;








    std::cout << "\e[31m\e[1m/**************Funtion min*************/ " <<  "\e[0m" << std::endl;
    int x(65);
    int y(65);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type int pour les deux variable*/
    if (x < y)
        std::cout << "int : mon x est plus petit que y = "<<  min<int>(x, y) << std::endl;
    else
        std::cout << "int : mon y est plus petit ou egal a x = "<<  min<int>(x, y) << std::endl;
    std::cout << "-----" << std::endl;
    double a(65.65);
    double b(64.5);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type double pour les deux variable*/
    if (a < b)
        std::cout << "double : mon a est plus petit que b = "<<  min<double>(a, b) << std::endl;
    else
        std::cout << "double : mon b est plus petit ou egal a a = "<<  min<double>(a, b) << std::endl;
    
    std::cout << "-----" << std::endl;
    float c(64.6f);
    float d(64.5f);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type float pour les deux variable*/
    if (c < d)
        std::cout << "float : mon c est plus petit que d = "<<  min<float>(c, d) <<  std::endl;
    else
        std::cout << "float : mon d est plus petit ou egal a c = "<<  min<float>(c, d) << std::endl;

    std::cout << "-----" << std::endl;
    char e('*');
    char f('a');
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type char pour les deux variable*/
    if (e < f)
        std::cout << "char : mon e est plus petit  que f = "<<  min<char>(e, f) <<  std::endl;
    else
        std::cout << "char : mon f est plus petit ou egal a e = "<<  min<char>(e, f) << std::endl;

    /*************************************************/
    std::cout << "\e[31m\e[1m/**************Funtion max*************/ " <<  "\e[0m" << std::endl;
    int g(65);
    int h(69);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type int pour les deux variable*/
    if (g > h)
        std::cout << "int : mon g est plus grand h = "<<  max<int>(g, h) << std::endl;
    else
        std::cout << "int : mon h est plus grand ou egal a g = "<<  max<int>(g, h) << std::endl;
    std::cout << "-----" << std::endl;
    double i(65.65);
    double j(64.5);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type double pour les deux variable*/
    if (i > j)
        std::cout << "double : mon i est plus grand j = "<<  max<double>(i, j) << std::endl;
    else
        std::cout << "double : mon j est plus grand ou egal a i = "<<  max<double>(i, j) << std::endl;
    
    std::cout << "-----" << std::endl;
    float k(64.6f);
    float l(64.5f);
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type float pour les deux variable*/
    if (k > l)
        std::cout << "float : mon k est plus grand l = "<<  max<float>(k, l) <<  std::endl;
    else
        std::cout << "float : mon l est plus grand ou egal a k = "<<  max<float>(k, l) << std::endl;

    std::cout << "-----" << std::endl;
    char m('*');
    char n('a');
    /*j'instancie explecitement mon template et maintenant mon model
    saura que j'utilise un type char pour les deux variable*/
    if (m > n)
        std::cout << "char : mon m est plus grand n = "<<  max<char>(m, n) <<  std::endl;
    else
        std::cout << "char : mon n est plus grand ou egal a m = "<<  max<char>(m, n) << std::endl;
    return 0; 
}