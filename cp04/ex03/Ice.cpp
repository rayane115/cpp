#include "Ice.hpp"
/*cest bon */
Ice::Ice(): AMateria("ice")
{
}

Ice::Ice( const Ice & src ): AMateria("ice")
{
	*this =src;
}

Ice::~Ice(){}

Ice &				Ice::operator=( Ice const & rhs )
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}