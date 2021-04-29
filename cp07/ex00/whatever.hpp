#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename S>
void swap(S & x, S & y)
{
    S swap;
    swap = x;
    x = y;
    y = swap;
}

template<typename T>
T const & min(T const & x, T const & y)
{
    /*si x est plus petit que y , renvoi x : sinon renvoi y */
    return (x < y ? x : y);
}

template<typename V>
V const & max(V const & x, V const & y)
{
    /*si x est plus grand que y , renvoi x : sinon renvoi y */
    return (x > y ? x : y);
}
#endif