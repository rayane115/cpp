#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
public:
	Weapon(std::string typeconstructeur);
	~Weapon();
    void setType(std::string newtype);
    const std::string &getType();

private:
    std::string     type;
};

#endif