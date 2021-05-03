#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template<typename T>
void iter(T & array, T & taille, void (*ptr)(T & test))
{

    while(taille)
    {
        (*ptr)(array[taille]);
        taille--;
    }
}



#endif