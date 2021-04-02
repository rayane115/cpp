#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
/*cest bn */
class AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
		AMateria();
		
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &);
		virtual ~AMateria();
		AMateria & operator=(AMateria const & rhs);
		
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif 