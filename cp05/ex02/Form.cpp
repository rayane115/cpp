#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade): _name(name),
			_signGrade(signGrade), _execGrade(execGrade), _status(false)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const  Form & src ):_name(src._name),
			_signGrade(src._signGrade), _execGrade(src._execGrade), _status(false)
{
	*this = src;
}

Form::~ Form(){}


Form &				 Form::operator=(  Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_status = rhs.getStatus();
	}
	return *this;
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
    {
		_status = true;
        bureaucrat.signForm(*this);
    }
	else
    {
        bureaucrat.signForm(*this);
		throw Form::GradeTooLowException();
    }
}

void		Form::execute(Bureaucrat const & executor) const
{
	if (!this->_status)
		throw Form::NoteSignedException();
	if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else 
		return ;
}

const char * Form::GradeTooHighException::what()const throw()
{
	 return "*The grade is to high*";
}

const char* Form::GradeTooLowException::what() const throw()
{
	  return "*The grade is to low*";
}

const char* 		Form::NoteSignedException::what() const throw()
{
	return "The form is not signed";
}

std::ostream &			operator<<( std::ostream & o,  Form const & i )
{
	if (i.getStatus())
		o << i.getName() << " form (can be signed by a " << i.getSignGrade()
		<< " grade or higher and executed by a " << i.getExecGrade() << " grade or higher) :"
		<< " is curently signed" << std::endl;
	else if (!i.getStatus())
		o << i.getName() << " form (can be signed by a " << i.getSignGrade()
		<< " grade or higher and executed by a " << i.getExecGrade() << " grade or higher) :"
		<< " haven't been signed" << std::endl;
	return o;
}
std::string Form::getTarget()const {return _target;}
std::string const	Form::getName()const {return _name;}
int			Form::getSignGrade()const {return _signGrade;}
int			Form::getExecGrade()const {return _execGrade;}
bool		Form::getStatus()const {return _status;}
void		Form::setTarget(std::string set) { _target = set;}
void		Form::setStatus(bool set) { _status = set;}
