#include "Array.hpp"

template<typename T>
Array<T>::Array(): _n(0), _array_type(NULL)
{
    //std::cout << "test" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
    _array_type = new T[_n];
    std::cout << "salut" << std::endl ;
}

template<typename T>
Array<T>::~Array()
{

}