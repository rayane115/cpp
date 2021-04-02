#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist & src)
{
	*this = src;
	return ;
}

PowerFist::~PowerFist()
{
	
}

PowerFist &				PowerFist::operator=(PowerFist const & rhs)
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}