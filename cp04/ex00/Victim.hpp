#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim(std::string name);
		Victim(Victim const & src);
		virtual ~Victim();

		Victim &		operator=( Victim const & rhs );
        void presenter(std::ostream &flux, Victim const &victime) const;
		std::string		getName() const;
		virtual void	getPolymorphed() const;

	protected:
		Victim();
		std::string		_name;

};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif 