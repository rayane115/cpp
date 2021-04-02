#include "Pony.hpp"

Pony::Pony()
{
	this->name = std::string();
}

Pony::~Pony()
{
    std::cout << this->name << " is dead" << std::endl;
}

void	Pony::jump()
{
	std::cout << this->name << " is jumping huhuhu " << std::endl;
}

void	Pony::run()
{
	std::cout << this->name << " is running huhuhu " << std::endl;
}

void	Pony::setName(std::string str)
{
	/*on affecte a la variable name qui est dans l'instance this, la variable str*/
	this->name = str;
	std::cout << "Pony named " << this->name << " is created huhuhu " << std::endl;
}
