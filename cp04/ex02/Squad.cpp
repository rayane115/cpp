#include "Squad.hpp"

Squad::Squad(): _first(NULL)
{
}

Squad::Squad( const Squad & src )
{
	*this = src;
}

Squad::~Squad()
{
	_lstClear();
}

Squad &	Squad::operator=( Squad const & rhs )
{
	_lstClear();
	for (int i = 0; i < rhs.getCount(); i++)
		push(rhs.getUnit(i)->clone());
	return *this;
}

int Squad::getCount() const
{
    /*renvoi le nombre d'element*/
    t_list *list = _first;
	int len = 0;

	while (list)
	{
		len++;
		list = list->next;
	}
	return len;
}

ISpaceMarine* Squad::getUnit(int index) const
{
    /*renvoi le pointeur correspondant a l'index*/
    t_list *list = _first;
    while (list && index)
    {
        list = list->next;
        index--;
    }
    return list->spaceMarine;
}

int Squad::push(ISpaceMarine* topush)
{
    /*fonction qui rajoute un element au squad*/
    t_list *list = _first;
    int len = 1;
    if (topush == NULL)
		return getCount();
    if (list == NULL)
    {
        /*je cree un element si la list est vide */
        _first = new t_list();		
		_first->spaceMarine = topush;
		_first->next = NULL;
    }
    else
    {
        /*sinon si elle n'est pas vide */
        while (list->next != NULL)
        {
            list = list->next;
            len++;
        }
        list->next = new t_list();		
		list->next->spaceMarine = topush;
		list->next->next = NULL;
    }
    return len;
}

void Squad::_lstClear()
{
	t_list *list = _first;
	t_list *next;

	while (list)
	{
        next = list->next;
		delete list->spaceMarine;
		delete list;
		list = next;
	}
	_first = NULL;
}
