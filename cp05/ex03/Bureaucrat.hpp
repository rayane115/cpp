#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
# include <stdexcept>
#include "Form.hpp"

class Form;

class   Bureaucrat
{
    public:
        Bureaucrat(std::string const name, int grade);

        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat( Bureaucrat const & src );
		Bureaucrat &	operator=(Bureaucrat const & rhs);

        std::string const    getName()const;
        int    getGrade()const;
        void				increase();
		void				decrease();
		void				signForm(Form & form);
		void				executeForm(Form const & form);
        /*******************************************************/
    class GradeTooHighException : public std::exception
	{
	    public:
		    virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	    public:
		    virtual const char *what() const throw();		

	};
    
    private:
        std::string const  _name;
        int _grade;


};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &bureaucrat);

#endif