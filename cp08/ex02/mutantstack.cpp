#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
    /*constructeur par defaut*/
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & copy)
{
    /*constructeur par copie*/
	*this = copy;
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack<T> &copy)
{
    /*copie surcharge d'operator =*/
    this->c = copy.c;
    this->top = copy.top;
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    /*destructeur*/
}