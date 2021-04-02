#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		void	exec(Bureaucrat &bureaucrat) const;

	private:
		PresidentialPardonForm();
};
#endif 