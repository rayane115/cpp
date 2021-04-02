#include "Other.hpp"

Other::Other(){}

Other::Other(std::string name): Victim(name)
{
	std::cout << "Zag Zag" << std::endl;
}

Other::Other( const Other & src )
{
	*this = src;
	return ;
}


Other::~Other()
{
    std::cout << "BYE..." << std::endl;
}

Other &				Other::operator=( Other const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

void			Other::getPolymorphed() const
{
	std::cout << _name << " has been turned into a tiiiiiiiiiiiiiiger!" << std::endl;
}