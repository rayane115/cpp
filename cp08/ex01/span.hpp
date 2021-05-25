#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>




class Span
{
    public:
        ~Span();
        Span(unsigned int n);
        Span(Span const & copy);
        Span &operator=(Span const & copy);

        void    addNumber(int n);
        void    addNumber(int begin, int end);

        int    shortestSpan(void);
        int    longestSpan(void);
        

    private:
        Span();
        unsigned int _nbr_integer;
        std::vector<int>_nbr;

};
#endif
