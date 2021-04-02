#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>
# include <string>

class AWeapon
{
    private:
    protected: 
		AWeapon();
		std::string _name;
		int			_apcost;
		int			_damage;

    public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon & src);
		virtual ~AWeapon();
		AWeapon &	operator=(AWeapon const & rhs);
		std::string const	getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
};

#endif 