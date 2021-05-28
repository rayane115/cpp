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
		
		/*typedef pour eviter de tout re ecrir et juste ecrir iterator*/
		typedef typename std::stack<T>::container_type::iterator iterator;

		/*fonction begin et end appartenant a MutantStack qui fait appel a la fonction begin de l'attribut "c" qui 
		represente un containeur sous jaccent qui lui est protected pour pouvoir l'utiliser dans MutantStack*/  
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
