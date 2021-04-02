#ifndef  CLAPTRAP_HPP
# define  CLAPTRAP_HPP

# include <iostream>
# include <string>

class  ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(  ClapTrap const & other );
		~ ClapTrap();

		ClapTrap &		operator=(ClapTrap const & rhs);
		void        	rangedAttack(std::string const & target);
		void        	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		//void			setEnergyPoint(unsigned int amount);

		std::string 	getName();
		int				getHitPoints();
		unsigned int 	getMaxHitPoints();
		int 			getEnergyPoints();
		unsigned 		getMaxEnergyPoints();
		int 			getLevel();
		int 			getMeleeAttackDamage();
		int 			getRangedAttackDamage();
		int 			getArmorDamageReduction();

	protected:
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