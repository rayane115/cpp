#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>




template <typename T>
class Array
{
    public:
        Array();
        ~Array();
		Array( const Array& copy );
		T & operator=(const T & copy );
		T &	operator[](int i);
        Array(unsigned int n);

		int size(void);
    private:
        T *_array_type;
        int _n;
};

#endif
