#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() : QI(120)
{
    (void)QI;
}

Brain::~Brain()
{}

std::string			Brain::identify() const
{
	/* je recupere l'adresse de l'objet brain */
	const void			*address = this;
	std::stringstream	ss;
	ss << address;
	std::string			string = ss.str();
	return string;
}