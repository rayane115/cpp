#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>




template <typename T>
class Array
{
    public:
        Array();
        ~Array();
        Array(unsigned int n);
    private:
        T *_array_type;
        int _n;
};

#endif