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
    //std::cout << "salut" << std::endl ;
}

template<typename T>
Array<T>::Array( const Array & copy )
{
    /*constructeur de copie avec mes test*/
	
/*	*this = copy;	

	std::cout << " avant le test " << std::endl;
	std::cout << "celle qui se fait copier = " << copy._array_type[0] << copy._array_type[1] << copy._array_type[3] << std::endl;
	std::cout << "celle qui a copier  = " << this->_array_type[0] << this->_array_type[1] << this->_array_type[3] << std::endl;

	std::cout << "maintenant je vais modifier une valeur normalement elle devrait modifier aussi this et re imprimer le tout " << std::endl;
	this->_array_type[0] = 999;
	std::cout << "celle qui se fait copier = " << copy._array_type[0] << copy._array_type[1] << copy._array_type[3] << std::endl;
	std::cout << "celle qui a copier  = " << this->_array_type[0] << this->_array_type[1] << this->_array_type[3] << std::endl;
*/
	this->_array_type = new T[copy._n];
//	std::cout << "mon n =  " << _n <<  std::endl;
	for(int i = 0; i < copy._n ; i++)
	{
		this->_array_type[i] = copy._array_type[i];
	}
	this->_n = copy._n;
	//this->_array_type[0] = 233;
	//std::cout << "celle qui se fait copier = " << copy._array_type[0] << copy._array_type[1] << copy._array_type[3] << std::endl;
	//std::cout << "celle qui a copier  = " << this->_array_type[0] << this->_array_type[1] << this->_array_type[3] << std::endl;
}

template<typename T>
T &				Array<T>::operator=(const T & copy )
{
 /*  Surcharge d'operateur qui permet aussi de faire une copie 
	je vais devoir faire une deep copy*/

	std::cout << "oeoeoeoeo      gggfg" << std::endl;
	//this->_array_type = new T[_n];
	//this->_n = copy._n;
	return *this;
}

template<typename T>
T & Array<T>::operator[](int i)
{
	/*fonction qui permet d'acceder a un element du tableau
	 et de le renvoyer c'est ici que je vais verifier si
	 il depasse la limite */
	if (i >= _n || i < 0)
	{
		throw std::string("olala tu as deborde");
	}
	return _array_type[i];
}

template<typename T>
Array<T>::~Array()
{

}

template<typename T>
int Array<T>::size(void)
{
	return (_n);
}
