#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:
		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form* makeForm(std::string name, std::string target);
		Form *creatRobot(std::string target);
		Form *creatPresident(std::string target);
		Form *creathrubbery(std::string target);

	private:

};

#endif