#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src)
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	
}

PlasmaRifle &				PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
	}
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}