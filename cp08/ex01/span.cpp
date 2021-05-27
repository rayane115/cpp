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
    est de trier deja du plus petit au plus grand , apres de faire une soustraction
    de nbr[i + 1] - nbr[i] et de le stocker dans un nouveau tableau.
    Apres je regarderais le int le plus petit de mon nouveau tableau et il sera
    l'interval le plus petit*/

    if (_nbr.size() <= 1)
        throw std::string ("Pas assez de int pour checker un interval");
    
    int i(0);
    int plusPetit(0);
	std::sort(_nbr.begin(), _nbr.end());
    std::vector<int>::const_iterator it1 = _nbr.begin();
	std::vector<int>::const_iterator ite1 = _nbr.end();
    std::vector<int>nbr2;

    while(it1 != ite1)
    {
        if (_nbr[i + 1] != *ite1)
        {
            nbr2.push_back(_nbr[i + 1] - _nbr[i]);
        }
        i++;
        it1++;
    }

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
