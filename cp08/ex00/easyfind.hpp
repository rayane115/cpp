#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <list>
#include <algorithm>


template <typename T>
void	easyfind(T const & conteneur, const int find_nbr)
{
	/*	fonction find qui renvoi un iterator au moment ou il trouve une occurance
	sinon il renvoi end. */

	typename T::const_iterator it = conteneur.begin();
	typename T::const_iterator ite = find(it, conteneur.end(), find_nbr);

	if (*ite == find_nbr)
	{
		std::cout << "il y a une occurence" << std::endl;
	}
	else
	{
		throw std::string("aucune occurence trouve");
	}
	
}

#endif
