#include "Convertisseur.hpp"

Convertisseur::Convertisseur(std::string input): _input(input), _status(false)
{
    /*Constructeur qui recupere l'input, qui initialise _input et fera appel
    a la fonction check_convert pour voir ce que j'ai recuperer */
    check_convert();

}

Convertisseur::Convertisseur( const Convertisseur & copy )
{
    /*constructeur de copie*/
    *this = copy;
}

Convertisseur::~Convertisseur(){
    /*destructeur*/
}

Convertisseur &				Convertisseur::operator=(const Convertisseur & copy )
{
    /*Surcharge d'operateur qui permet aussi de faire une copie */
	this->_input = copy._input;
	this->_c = copy._c;
	this->_i = copy._i;
    this->_f = copy._f;
    this->_d = copy._d;
	return *this;
}

/*********************************************************************/

int     Convertisseur::isFloat(std::string input) const
{
    /*check pour voir si c'est un float 
    on check dabbord si il commence par un + ou -
    ensuite on regarde si le dernier charactere est un 'f' pour dire si cest un float
    Si oui on parcourt la chaine et si il y a autre chose que un chiffre c'est que 
    cest soit une virgule soit une erreur .
    Si il y a plusieur virgule c'est une erreur. */
    size_t	i;
	int	virgule;

	i = 0;
	virgule = 0;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	if (input[input.length() - 1] != 'f')
		return (0);
	for ( ; i < input.length() - 1; i++)
		if (!isdigit(input[i]))
		{
			if (input[i] == '.')
				virgule++;
			else
				return (0);
		}
	if (virgule != 1)
		return (0);
	return (1);
}
int     Convertisseur::isDouble(std::string input) const
{
    /*check pour voir si cest un double
    on verifie dabbord si on commence par un + ou -
    ensuite on parcour la chaine si c'est pas un chiffre c'est que c'est soit une 
    virgule soit autre chose , si il y a plusieur virgule c'est que c'est une erreur
    sinon c'est parfait c'est que c'est un double */
	size_t	i;
	int	virgule;

	i = 0;
	virgule = 0;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	for ( ; i < input.length(); i++)
		if (!isdigit(input[i]))
		{
			if (input[i] == '.')
				virgule++;
			else
				return (0);
		}
	if (virgule != 1)
		return (0);
	return (1);

}

int		Convertisseur::isChar(std::string input) const
{
    /*fonction qui check si c'est un char 
    Si la taille de l'input est plus grand que 1 ou si c'est un chiffre 
    c'est que c'est une erreur*/
    if (input.length() != 1 || isdigit(input[0]))
        return (0);
    return (1);
}

int     Convertisseur::isInteger(std::string input) const
{
    /*fonction qui check si c'est un int
    on demare notre i a 1 si input[0] est == a un + ou -
    on parcour notre chaine et si il y a autre chose qu'un chiffre 
    forcemment c'est que cela nest pas un int alors on retournera 0 */
    size_t i;

	i = 0;
	if (input[0] == '+' || input[0] == '-')
		i = 1;
	for ( ; i < input.length(); i++)
		if (!isdigit(input[i]))
			return (0);
	return (1);
}

/**************************************************/

void    Convertisseur::convert_charactere()
{
    /*on convertie sur chaque ligne soit en int , float , double
    la syntax propre au c++ s'ecrit comme cela ( on veut stactic_caster< en tel type > tel variable)*/
    _c = _input[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);

    if (_i < 0 || _i > 127)
    {
        std::cout << "char : Impossible" << std::endl;
    }

    else if (_c >= 0 && _c <= 32 || _c == 127)
    {
        std::cout << "char : Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char : " << _c << std::endl;
    }
    std::cout << "int : " << _i << std::endl;
    std::cout << "float : " << _f  << ".0f" << std::endl;
    std::cout << "double : " << _d << ".0" << std::endl;
}

void    Convertisseur::convert_float()
{
    /*on convertie sur chaque ligne soit en int , char , double
    la syntax propre au c++ s'ecrit comme cela ( on veut stactic_caster< en tel type > tel variable)*/
	_f = atof(_input.c_str());
	_c = static_cast<char>(_f);
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);

    if (_i < 0 || _i > 127)
    {
        std::cout << "char : Impossible" << std::endl;
    }

    else if (_c >= 0 && _c <= 32 || _c == 127)
    {
        std::cout << "char : Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char : " << _c << std::endl;
    }
    /****************************/
    long int tmp;
	tmp = std::atol(_input.c_str());
    if (tmp > std::numeric_limits<int>::max()
	|| tmp < std::numeric_limits<int>::min())
    {
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : Impossible" << std::endl;
        std::cout << "double : Impossible" << std::endl;
    }
    else
    {
        std::cout << "int : " << _i << std::endl;
        if(_status == true)
        {
            std::cout << "float : " << _f   << "f" << std::endl;
            std::cout << "double : " << _d  << std::endl;
        }
        else
        {
            std::cout << "float : " << _f   << ".0f" << std::endl;
            std::cout << "double : " << _d  << ".0" << std::endl;
        }
    }
}

void		Convertisseur::convert_double()
{
    /*on convertie sur chaque ligne soit en int , float , char
    la syntax propre au c++ s'ecrit comme cela ( on veut stactic_caster< en tel type > tel variable)*/
	_d = std::atof(_input.c_str());
	_c = static_cast<char>(_d);
	_i = static_cast<int>(_d);
	_f = static_cast<double>(_d);

    /*verification si le char peut etre afficher */
    if (_i < 0 || _i > 127)
    {
        std::cout << "char : Impossible" << std::endl;
    }

    else if (_c >= 0 && _c <= 32 || _c == 127)
    {
        std::cout << "char : Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char : " << _c << std::endl;
    }

    /********************************/
    long int tmp;
	tmp = std::atol(_input.c_str());
    if (tmp > std::numeric_limits<int>::max()
	|| tmp < std::numeric_limits<int>::min())
    {
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : Impossible" << std::endl;
        std::cout << "double : Impossible" << std::endl;
    }
    else
    {
        std::cout << "int : " << _i << std::endl;
        if(_status == true)
        {
            std::cout << "float : " << _f   << "f" << std::endl;
            std::cout << "double : " << _d  << std::endl;
        }
        else
        {
            std::cout << "float : " << _f   << ".0f" << std::endl;
            std::cout << "double : " << _d  << ".0" << std::endl;
        }
    }
}

void		Convertisseur::convert_integer()
{
   
    /*on convertie sur chaque ligne soit en int , float , char
    la syntax propre au c++ s'ecrit comme cela ( on veut stactic_caster< en tel type > tel variable)*/
    _i = atoi(_input.c_str());
    _c = static_cast<char>(_i);
	_f = static_cast<double>(_i);
    _d = static_cast<int>(_i);


    /*verification si le char peut etre afficher*/
    if (_i < 0 || _i > 127)
    {
        std::cout << "char : Impossible" << std::endl;
    }

    else if (_c >= 0 && _c <= 32 || _c == 127)
    {
        std::cout << "char : Non displayable" << std::endl;
    }
    else
    {
        std::cout << "char : " << _c << std::endl;
    }
    /******************************/
 
    /*pour voir si je depasse la limite */
    long int tmp;
	tmp = std::atol(_input.c_str());
    if (tmp > std::numeric_limits<int>::max()
	|| tmp < std::numeric_limits<int>::min())
    {
        std::cout << "int : Impossible" << std::endl;
        std::cout << "float : Impossible" << std::endl;
        std::cout << "double : Impossible" << std::endl;
       
    }
    else
    {
        std::cout << "int : " << _i << std::endl;
        std::cout << "float : " << _f   << ".0f" << std::endl;
        std::cout << "double : " << _d  << ".0" << std::endl;
    }

}

void    Convertisseur::check_status()
{
    /*fonction qui regarde ce qu'il y a apres la virgule pour pouvoir gerer 
    dans mon std::cout soit 0.f soit f tout seul */
    for (size_t i = 0; i < _input.length() ; i++)
    {
        if (_input[i] == '.' && _input[i + 1] > '0' && _input[i + 1] <= '9')
        {
            _status = true;
        }
    }
}

void    Convertisseur::not_a_number()
{
    std::cout << "char : Impossible" << std::endl;
    std::cout << "int : Impossible"  << std::endl;
    std::cout << "float : nanf"   << std::endl;
    std::cout << "double : nan"  << std::endl;

}

void    Convertisseur::infinity_function()
{
    if (_input[0] != '-')
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible"  << std::endl;
        std::cout << "float : inff"   << std::endl;
        std::cout << "double : inf"  << std::endl;
    }
    
    else
    {
        std::cout << "char : Impossible" << std::endl;
        std::cout << "int : Impossible"  << std::endl;
        std::cout << "float : -inff"   << std::endl;
        std::cout << "double : -inf"  << std::endl; 
    }
}

void    Convertisseur::check_convert()
{
    /* fonction qui check qu'elle est le genre d'input que lon a recuperer */
    check_status();
    if (isChar(_input))
    {
        std::cout << "c'est un char: " << _input << std::endl;
        convert_charactere();
    }

    else
    {
        if (isInteger(_input))
        {
            std::cout << "c'est un int: " << _input << std::endl;
            convert_integer();
        }
        else if(isFloat(_input))
        {
            std::cout << "c'est un float: " << _input  << std::endl;
            convert_float();
        }
        else if (isDouble(_input))
        {
            std::cout << "c'est un double: " << _input << std::endl;
            convert_double();
        }
        else if (_input == "nan" || _input == "nanf")
        {
            std::cout << "c'est un nan ou nanf: " << _input << std::endl;
            not_a_number();
        }
        else if (_input == "inf" || _input == "inff" || _input == "+inff"
        || _input == "+inf" || _input == "-inf" || _input == "-inff")
        {
            std::cout << "infinity : " << _input << std::endl;
            infinity_function();
        }

        else
        {
            std::cout << "impossible convert = " << _input << std::endl;
        }
    }
}
