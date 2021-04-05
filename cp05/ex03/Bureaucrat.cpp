#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "constructeur par defaut appele" << std::endl;

}

Bureaucrat::~Bureaucrat(){
    
}

Bureaucrat::Bureaucrat(std::string const name, int grade) :_name(name), _grade(grade)
{
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if ( this != &rhs )
	{
        this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream		&operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (output);
}

void		Bureaucrat::increase()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::decrease()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form & form)
{
	if (form.getStatus() == true)
	{
		std::cout << _name << " signs " << form.getName() << std::endl;
	}

	else
	{
		std::cout << _name << " can't sign " << form.getName() << " because he does not have the necessary rank" << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	std::cout << _name << " try to execute " << form.getName() << ": ";
	form.exec(*this); 
}

std::string const    Bureaucrat::getName()const{return _name;}
int    Bureaucrat::getGrade()const{return _grade;}


