#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :_nb_materia(0)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0; i < 4; i++)
		if (rhs._materia[i] != NULL)
			_materia[i] = rhs._materia[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* toLearn)
{
	if (_nb_materia < 4 && toLearn)
	{
		for (int i = 0; i < _nb_materia; i++)
		{
			if (_materia[i] == toLearn)
				return ;
		}
		_materia[_nb_materia] = toLearn;
		_nb_materia++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
		{
			AMateria *ret = _materia[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}