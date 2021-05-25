#ifndef ITER_HPP
# define ITER_HPP

#include <cstring>
#include <iostream>


template <typename T>
void iter(T  * array, int taille, void (*ptr)(const T &))
{
    int i(0);
    while (i < taille)
    {
        (*ptr)(array[i]);
        i++;
    }

}

template<typename T>
void    function(const T & test)
{
    std::cout<< test <<   std::endl;
}

#endif