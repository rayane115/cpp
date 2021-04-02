#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion();
		RadScorpion( RadScorpion const & src );
		~RadScorpion();

		RadScorpion &		operator=( RadScorpion const & rhs );

	private:

};

#endif 