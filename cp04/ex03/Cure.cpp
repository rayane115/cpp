#include "Cure.hpp"
/*cest bon */
Cure::Cure(): AMateria("cure")
{
}

Cure::Cure( const Cure & src ): AMateria("cure")
{
	*this =src;
}

Cure::~Cure(){}

Cure &				Cure::operator=( Cure const & rhs )
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}