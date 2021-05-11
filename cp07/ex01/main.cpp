#include "iter.hpp"



int main()
{
    std::cout << "\e[31m\e[1m/**************tableau de char *************/ " <<  "\e[0m" << std::endl;
    char prenom[] = "rayane"; 
    iter(prenom, strlen(prenom), &function);

    std::cout << "\e[31m\e[1m/**************tableau de int *************/ " <<  "\e[0m" << std::endl;
    int tab_int[6] = {0, 1, 2, 3, 4, 5};
    iter(tab_int, 6, &function);

    std::cout << "\e[31m\e[1m/**************tableau de double *************/ " <<  "\e[0m" << std::endl;
    double tab_double[6] = {0.5, 1.5, 2.4, 3.3, 4.4, 5.5};
    iter(tab_double, 6, &function);

    std::cout << "\e[31m\e[1m/**************tableau de float *************/ " <<  "\e[0m" << std::endl;
    float tab_float[6] = {0.5f, 1.5f, 2.4f, 3.3f, 4.4f, 5.5f};
    iter(tab_float, 6, &function);

    std::cout << "\e[31m\e[1m/**************tableau de string *************/ " <<  "\e[0m" << std::endl;
    std::string tab_str[6] = {"papa", "maman", "niya", "manelle", "chara", "rayane"};
    iter(tab_str, 6, &function);

    return 0;
}