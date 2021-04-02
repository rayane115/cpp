#include <iostream>
#include <string>

void			memoryLeak()
{
	/* allocation dynamique d'une string et pour la free on fait delete*/
	std::string*			panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

int				main()
{
	memoryLeak();
	system("leaks a.out");
	return 0;
}