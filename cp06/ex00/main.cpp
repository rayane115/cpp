#include "Convertisseur.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: arguments" << std::endl;
		return (1);
	}
	Convertisseur a(av[1]);
	return (0);
}
