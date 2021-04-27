
#include <iostream>
#include <string>
#include <cstdlib>

struct Data { std::string s1; int n; std::string s2; };

void * serialize(void)
{
    /*fonction qui vas cree deux string avec des lettre aleatoire
    et un nombre aleatoire */
    srand((unsigned int)time(0));
    Data *raw = new Data;

    std::string	alphanum("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    for (int i = 0; i < 8 ; i++)
    {
        /* 8 tour de boucle en donnant une lettre aleatoire pour s1 et s2 */
        raw->s1 += alphanum[rand() % alphanum.length()];
		raw->s2 += alphanum[rand() % alphanum.length()];
    }
    raw->n = rand();
    std::cout << "/********************serialize***********************/ " << std::endl;
    std::cout << "s1 = " << raw->s1 << std::endl;
    std::cout << "nbr = " << raw->n << std::endl;
    std::cout << "s2 = " << raw->s2 << std::endl;
    return raw;

}

Data * deserialize(void * raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *data_s;
    Data *data_d;
    /*obliger de re interpreter car la fonction renvoi un pointeur de type void*/
    data_s = (reinterpret_cast<Data*>(serialize()));
    data_d = deserialize(data_s);
    std::cout << "/********************deserialize***********************/ " << std::endl;
    std::cout << "s1 = " << data_d->s1 << std::endl;
    std::cout << "nbr = " << data_d->n << std::endl;
    std::cout << "s2 = " << data_d->s2 << std::endl;
    delete data_s;
    return 0;
}