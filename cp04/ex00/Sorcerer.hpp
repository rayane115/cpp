#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
# include "Victim.hpp"


class Sorcerer
{
    public:
    Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();
    
    Sorcerer &	operator=(Sorcerer const & rhs);
    void 		polymorph(Victim const &victim) const;
    std::string		getName()const ;
    std::string		getTitle()const ;

    void presenter(std::ostream &flux, Sorcerer const &sorcier) const;

    private:
        Sorcerer();
	    std::string _name;
        std::string _title;

};
std::ostream& operator<<(std::ostream &flux, Sorcerer const& sorcier );
#endif