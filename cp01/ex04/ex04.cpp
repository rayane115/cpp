#include <iostream>

int				main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*ptr = &string;
	std::string		&ref = string;

	std::cout << "ptr : " << *ptr << std::endl;
	std::cout << "ref : " << ref << std::endl;
	return 0;
}