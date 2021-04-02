#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class FragTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap();
		FragTrap &		operator=(FragTrap const & rhs);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const & target);
		void			sniperAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			laserAttack(std::string const & target);

		std::string 	getName();
		int				getHitPoints();
		unsigned int 	getMaxHitPoints();
		int 			getEnergyPoints();
		unsigned 		getMaxEnergyPoints();
		int 			getLevel();
		int 			getMeleeAttackDamage();
		int 			getRangedAttackDamage();
		int 			getArmorDamageReduction();

		void			setEnergyPoint(int amount);
		void			attackJesus(FragTrap & Jesus);

	private:
		std::string		_name;
		int				_hitPoints;
		unsigned int	_maxHit;
		int				_energyPoints;
		unsigned int	_maxEnergy;
		int			    _level;
		int				_meleeAttack;
		int				_rangeAttack;
		int				_armorDamage;
};

#endif 