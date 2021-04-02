#ifndef FIXED
# define FIXED
#include <iostream>

class		Fixed
{
    public:
		Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed & operator=(Fixed const & rhs);
        int		getRawBits() const;
        void	setRawBits(int const raw);

	private:
		int			m_value;
        int static const m_nbBit = 8;
};

#endif