#include "mutantstack.hpp"
#include "mutantstack.cpp"

int main()
{
    std::cout << "\e[31m\e[1m/**************main sujet*************/ " <<  "\e[0m" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

	std::cout << "\e[31m\e[1m/**************Test Rayane*************/ " <<  "\e[0m" << std::endl;

	MutantStack<char> mstack_char;
	mstack_char.push('r');
	mstack_char.push('a');
	mstack_char.push('y');
	mstack_char.push('a');
	mstack_char.push('n');
	mstack_char.push('e');
	mstack_char.push('!');
	std::cout << mstack_char.top() << std::endl;

	MutantStack<char>::iterator it1 = mstack_char.begin();
	MutantStack<char>::iterator ite1 = mstack_char.end();
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}

    return 0;
}
