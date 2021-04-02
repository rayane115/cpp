#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
/*cest bon */
class Ice : public AMateria
{

	public:
		Ice();
		Ice(const Ice &src);
		~Ice();
		Ice &		operator=(Ice const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif 