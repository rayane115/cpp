#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:
		MutantStack();
		MutantStack(const MutantStack<T> & copy);
		MutantStack<T> & operator=(const MutantStack<T> &copy);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}




	private:
		
};

#endif 