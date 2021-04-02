#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad(const Squad & src );
		virtual ~Squad();
		Squad &		operator=( Squad const & rhs );
				
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int index) const;
		virtual int push(ISpaceMarine* topush);

	private:
		typedef struct s_list
		{
			ISpaceMarine *spaceMarine;
			struct s_list *next;
		} t_list;
		
		t_list *_first;
		void _lstClear();
};

#endif 