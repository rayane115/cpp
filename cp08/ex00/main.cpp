#include "easyfind.hpp"

int	main()
{
	try
	{
		/*************test pour VECTOR ******************/
		std::vector<int>nbr(6);
		nbr[0] = 52;
		nbr[1] = 1;
		nbr[2] = 56;
		nbr[3] = 96;
		nbr[4] = 46;
		nbr[5] = 41;
		easyfind(nbr, 41);

		/************** test pour LIST *************/
	}

	catch(std::string erreur)
	{
		std::cout << erreur << std::endl; 
	}
	return (0);
}
