#include "Peon.hpp"

Peon::Peon(){}

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( const Peon & src )
{
	*this = src;
	return ;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon &	Peon::operator=( Peon const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}