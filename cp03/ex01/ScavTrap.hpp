#ifndef ScavTRAP_HPP
# define ScavTRAP_HPP

# include <iostream>
# include <string>
# include <time.h> 
# include "FragTrap.hpp"

class ScavTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();
		ScavTrap &		operator=( ScavTrap const & rhs );

        void        	rangedAttack(std::string const & target);
		void        	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				challengeNewcomer(FragTrap & target);



        std::string 	getName();
		int				getHitPoints();
		unsigned int 	getMaxHitPoints();
		int 			getEnergyPoints();
		unsigned 		getMaxEnergyPoints();
		int 			getLevel();
		int 			getMeleeAttackDamage();
		int 			getRangedAttackDamage();
		int 			getArmorDamageReduction();
	private:

		std::string		_name;
		int				_hitPoints;
		unsigned int	_maxHit;
		int				_energyPoints;
		unsigned int	_maxEnergy;
		int				_level;
		int				_meleeAttack;
		int				_rangeAttack;
		int				_armorDamage;

};

#endif 