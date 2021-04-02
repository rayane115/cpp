#include "AMateria.hpp"

/*c'est bon */
AMateria::AMateria(std::string const &type): _xp(0), _type(type)
{
}

AMateria::AMateria( const AMateria & src )
{
	*this =src;
}

AMateria::~AMateria()
{
}

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_xp = rhs.getXP();
	return *this;
}

std::string const & AMateria::getType() const {return _type;}

unsigned int AMateria::getXP() const {return _xp;}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
	return ;
}