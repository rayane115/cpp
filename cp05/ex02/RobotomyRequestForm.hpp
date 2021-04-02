#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		void	exec(Bureaucrat &bureaucrat) const;

	private:
		RobotomyRequestForm();
};
#endif 