#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	Form(std::string name, int signGrade, int execGrade);
	Form( Form const & src );
	~Form();

	Form &		operator=( Form const & rhs );
	std::string const getName()const;
    int			getSignGrade()const;
    int	        getExecGrade()const;
    bool		getStatus()const;
    void		beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
	{
	    public:
		    virtual const char *what() const throw()
		    {
			    return "*The grade is to high*";
		    }

	};
	class GradeTooLowException : public std::exception
	{
	    public:
		    virtual const char *what() const throw()
		    {
			    return "*The grade is to low*";
		    }		

	};
private:
	Form();
	std::string const	_name;
    int const        	_signGrade;
	int	const			_execGrade;
    bool        		_status;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif