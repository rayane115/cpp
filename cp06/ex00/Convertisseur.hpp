#ifndef CONVERTISSEUR_HPP
# define CONVERTISSEUR_HPP

# include <iostream>
# include <cstdlib>
# include <limits>

class Convertisseur
{
	public:
		Convertisseur(std::string str);
		Convertisseur(const Convertisseur &copy);
        Convertisseur		&operator=(const Convertisseur& copy);
		~Convertisseur();

		void		check_convert();
		void		check_status();
		void		convert_charactere();
		void		convert_integer();
		void		convert_double();
		void		convert_float();
		void		not_a_number();
		void		infinity_function();

		int		isChar(std::string input) const;
		int		isInteger(std::string input) const;
		int		isFloat(std::string str) const;
		int		isDouble(std::string str) const;

	private:
		std::string		_input;
		char			_c;
		int			    _i;
		float			_f;
		double			_d;
		bool			_status;
		Convertisseur();
};

#endif