#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <list>

template <typename T>
void	easyfind(T const & conteneur, const int find_nbr)
{
	/*je vais declarer un iterateur pour parcourir mon conteneur et 
	 verifir si ce qu'il pointe est dans mon conteneur d'int 
 	si oui jenvoi un petit message sympas si il trouve pas je renvoi une 
	exeption. */

	bool a(false);
	int i(0);
	typename T::const_iterator it = conteneur.begin();
	typename T::const_iterator ite = conteneur.end();
	
	for( ; it != ite ; ++it)
	{
		if (*it == find_nbr)
		{

			std::cout<< "A l'index[" << i << "] de mon conteneur se trouve le meme nombre que find_nbr , soit le nombre " << *it << std::endl;
			a = true;
			break ;
		}
		i++;
	}

	if (a == false)
	{
		throw std::string("aucune occurence trouve");
	}
}

#endif
