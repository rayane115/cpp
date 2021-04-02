#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
	
		Peon(std::string name);
		Peon( Peon const & src );
		virtual ~Peon();
		Peon &			operator=( Peon const & rhs );
		
		virtual void	getPolymorphed() const;

	private:
		Peon();

};

#endif