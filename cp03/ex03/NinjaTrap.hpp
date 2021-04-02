#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

	public:

		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		NinjaTrap &		operator=(NinjaTrap const & rhs );
		void			ninjaShoebox(ClapTrap &rohff);
		void			ninjaShoebox(FragTrap &booba);
		void			ninjaShoebox(ScavTrap &pnl);
		void			ninjaShoebox(NinjaTrap &freddy);

	private:

};

#endif