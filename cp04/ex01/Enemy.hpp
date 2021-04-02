#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
	protected: 
		Enemy();
		int			_hp;
		std::string _type;
	
	public:
		Enemy(int hp, std::string const & type);
		Enemy( const Enemy & src );
		virtual ~Enemy();
		Enemy &	operator=( Enemy const & rhs );
		
		std::string const	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int damage);

};

#endif 