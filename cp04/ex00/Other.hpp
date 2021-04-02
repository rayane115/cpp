

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Other : public Victim
{

	public:
	
		Other(std::string name);
		Other( Other const & src );
		virtual ~Other();
		Other &			operator=( Other const & rhs );
		
		virtual void	getPolymorphed() const;

	private:
		Other();

};

#endif