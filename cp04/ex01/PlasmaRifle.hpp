#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & src);
		~PlasmaRifle();

		PlasmaRifle &		operator=(PlasmaRifle const & rhs);
		void attack() const;

	private:

};

#endif 