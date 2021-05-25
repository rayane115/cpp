#include "span.hpp"

Span::~Span()
{
    /*destructor*/
}

Span::Span(unsigned int n)
{
    _nbr_integer = n;
}

Span::Span(Span const & copy)
{
    /*constructeur par copie*/
    *this = copy;
}

Span & Span::operator=(Span const & copy)
{
    /*surcharge d'operator = */
    this->_nbr_integer = copy._nbr_integer;
	this->_nbr = copy._nbr;
    return *this;
}

void    Span::addNumber(int n)
{
    /*je remplie a chaque fois le vector si il depasse la capacite je renvoi 
    une erreur*/

    if (_nbr.size() == _nbr_integer)
    {
        throw std::string("La capacite du vector a ete depasse");
    }
    _nbr.push_back(n);
}

void    Span::addNumber(int begin, int end)
{
    /*je remplie a chaque fois le vector si il depasse la capacite je renvoi 
    une erreur, je le remplie avec une plage d'int*/
    //unsigned int stop(0);
    for(int i(begin) ; i <= end ; i++)
    {
        if (_nbr.size() == _nbr_integer)
        {
            throw std::string("La capacite du vector a ete depasse");
        }
        _nbr.push_back(i);
    }
}


int    Span::longestSpan(void)
{
    /*je vais chercher le plus grand int ainsi que le plus petit 
    et je vais faire une soustraction alors j'aurais l'interval
    le plus grand */

  //  int test(0);

    if (_nbr.size() <= 1)
        throw std::string ("Pas assez de int pour checker un interval");
    int plusGrand(0);
    int plusPetit(0);
    std::vector<int>::const_iterator it = _nbr.begin();
	std::vector<int>::const_iterator ite = _nbr.end();

    plusPetit = *it;
    while (it != ite)
    {
        if (plusPetit > *it)
            plusPetit = *it;
        it++;
    }
    it = _nbr.begin();
    plusGrand = *it;
    while (it != ite)
    {
        if (plusGrand < *it)
            plusGrand = *it;
        it++;
    }
    return (plusGrand - plusPetit);
}

int    Span::shortestSpan(void)
{
    /*pour trouver l'interval le plus petit , pour moi la bonne solution 
    est de soustraire et de stocker ds un nouveau tableau le resultat
    de nbr[i] - nbr[i + 1] ( en fesant attention a qui est le plus gand pour
    pas etre dans un nombre negatif) , de tout stocker dans un nouveau tableau
    et de regarder dans le nouveau tableau le plus petit int */

    if (_nbr.size() <= 1)
        throw std::string ("Pas assez de int pour checker un interval");
    
    int i(0);
    int plusPetit(0);
	std::sort(_nbr.begin(), _nbr.end());
    std::vector<int>::const_iterator it1 = _nbr.begin();
	std::vector<int>::const_iterator ite1 = _nbr.end();
    std::vector<int>nbr2;

//	for (std::vector<int>::iterator it=_nbr.begin(); it!=_nbr.end(); ++it)
 //   	std::cout << ' ' << *it;
//	std::cout << std::endl;
    while(it1 != ite1)
    {
        if (_nbr[i + 1] != *ite1)
        {
            nbr2.push_back(_nbr[i + 1] - _nbr[i]);
        }
        i++;
        it1++;
    }
//	for (std::vector<int>::iterator it2=nbr2.begin(); it2!=nbr2.end(); ++it2)
//		std::cout << ' ' << *it2;

    std::vector<int>::const_iterator it = nbr2.begin();
	std::vector<int>::const_iterator ite = nbr2.end();
    plusPetit = *it;
    while (it != ite)
    {
        if (plusPetit > *it)
            plusPetit = *it;
        it++;
    }
    
    return plusPetit;
}
