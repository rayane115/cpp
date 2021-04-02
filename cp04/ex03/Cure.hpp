#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
/*cest bon */
class Cure : public AMateria
{

	public:
		Cure();
		Cure(const Cure &src);
		~Cure();
		Cure &		operator=(Cure const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif 