#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>


class Zombie
{
public:
	Zombie();
	~Zombie();
    void    advert();
	void	announce();
	void	setName(std::string str);
	void	setType(std::string str);



private:
	std::string		name;
    std::string     type;
};

#endif