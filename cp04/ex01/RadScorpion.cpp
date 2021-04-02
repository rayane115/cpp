#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src )
{
	*this = src;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH * "<< std::endl;
}

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
{
	if ( this != &rhs )
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}