#include "Fixed.hpp"

Fixed::Fixed():m_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->m_value = other.m_value;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
	{
		this->m_value = rhs.getRawBits();
	}
    return *this;
}

int		Fixed::getRawBits() const
{	
    std::cout << "getRawBits member function called" << std::endl;
	return (this->m_value);	
}

void			Fixed::setRawBits(int const raw)
{
	this->m_value = raw;
	return ;
}