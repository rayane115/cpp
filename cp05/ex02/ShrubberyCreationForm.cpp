#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ): Form(src)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->setStatus(rhs.getStatus());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

void	ShrubberyCreationForm::exec(Bureaucrat &bureaucrat) const
{
	/*lance la fonction execute , si il y a aucune exeption connu ecrit dans le fichier un arbre 
	sinon il rentre dans le catch et ecrit quil na pas pu etre executer */
	try
	{
		execute(bureaucrat);
		std::ofstream output((getTarget() + "_shrubbery").c_str());
		const std::string tree = "\
					v .   ._, |_  .,\n\
				`-._\\/  .  \\ /    |/_\n\
					\\\\  _\\, y | \\//\n\
				_\\_.___\\\\, \\\\/ -.\\||\n\
				`7-,--.`._||  / / ,\n\
				/'     `-. `./ / |/_.'\n\
							|    |//\n\
							|_    /\n\
							|-   |\n\
							|   =|\n\
							|    |\n\
		--------------------/ ,  . \\--------._\n\
		";
		output << tree;
		output.close();
		std::cout << " succes" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << ", can't be executed" << '\n';
	}
}