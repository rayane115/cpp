#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap();
		FragTrap &		operator=(FragTrap const & rhs);
		
		unsigned int	vaulthunter_dot_exe(std::string const & target);
		void			sniperAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			laserAttack(std::string const & target);


		void			setEnergyPoint(int amount);
		void			attackJesus(FragTrap & Jesus);
	private:
};

#endif 