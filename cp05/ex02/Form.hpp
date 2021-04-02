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
	std::string getTarget()const;

	void		setTarget(std::string set);
	void		setStatus(bool set);

    void		beSigned(Bureaucrat &bureaucrat);
    void		execute(Bureaucrat const & executor) const;
    virtual void	exec(Bureaucrat &bureaucrat) const = 0;
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
	class NoteSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
private:
	Form();
	std::string const	_name;
    int const        	_signGrade;
	int	const			_execGrade;
    bool        		_status;
    std::string _target;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif