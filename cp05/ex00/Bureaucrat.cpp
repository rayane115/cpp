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

std::string const    Bureaucrat::getName()const{return _name;}
int    Bureaucrat::getGrade()const{return _grade;}


