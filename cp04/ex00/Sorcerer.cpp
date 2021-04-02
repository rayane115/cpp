#include "Sorcerer.hpp"



Sorcerer::Sorcerer(std::string name, std::string title)
{
	/*creation d'un soricer avec un ttitre */
    _name = name;
    _title = title;
	std::cout<< _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout<< this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &				Sorcerer::operator=(Sorcerer const & rhs)
{
	if ( this != &rhs )
	{
		this->_name = rhs._name;
        this->_title = rhs._title;
	}
	return *this;
}

void Sorcerer::presenter(std::ostream &flux, Sorcerer const &sorcier) const{

    flux << "I am " << sorcier.getName() << ", " << sorcier.getTitle() << ", and i like ponies ! (fonction operator)" << std::endl;
    return ;
}

std::ostream& operator<<(std::ostream &flux, Sorcerer const& sorcier )
{
    //Affichage des attributs
    sorcier.presenter(flux, sorcier);
    return flux;
}

void 			Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string		Sorcerer::getName()const { return _name;}
std::string		Sorcerer::getTitle()const { return _title;}