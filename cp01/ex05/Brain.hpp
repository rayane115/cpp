#ifndef BRAIN
# define BRAIN

#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	std::string		identify() const;

private:
	int QI;

};

#endif