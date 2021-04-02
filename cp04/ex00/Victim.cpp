#include "Victim.hpp"

Victim::Victim(){

}

Victim::Victim(std::string name)
{
    _name = name;
	std::cout << "Some random victim called " << _name << " just appeared!"
		<< std::endl;
}

Victim::Victim(const Victim & src)
{
	*this = src;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!"
		<< std::endl;
}

Victim &				Victim::operator=(Victim const & rhs)
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
	}
	return *this;
}

void Victim::presenter(std::ostream &flux, Victim const &victim) const{

    flux << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream &flux, Victim const& victim )
{
    //Affichage des attributs
    victim.presenter(flux, victim);
    return flux;
}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!"
		<< std::endl;
}


std::string		Victim::getName()const { return _name;}