#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(void)
{
   /*pour lex 00 */ 
  /*  try
    {
        Bureaucrat test("toto", 1);
        std::cout << test;
        //test.decrease();
        //test.increase();
    
    }

    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl ;
    }
    */

    /*pour lex 01 */
    /*try
    {
        Form test("papa", 4, 1);
        std::cout << test;
        Bureaucrat test2("maman", 4);
        std::cout << test2;
        test.beSigned(test2);

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl ;

    }
     */

    /*pour lex 02*/

    try
    {
        //////////////////////
        ShrubberyCreationForm formulaire("maison");
        Bureaucrat test("papa", 4);

        formulaire.beSigned(test);
        test.executeForm(formulaire);
        std::cout << "*********************************" << std::endl;
        /////////////////////////////

        PresidentialPardonForm formulaire2("appartement");
        Bureaucrat test2("maman", 1);
        formulaire2.beSigned(test2);
        test2.executeForm(formulaire2);
        std::cout << "*********************************" << std::endl;

        ///////////////////////////////

        RobotomyRequestForm formulaire3("immeuble");
        Bureaucrat test3("tonton", 2);
        formulaire3.beSigned(test3);
        test3.executeForm(formulaire3);
        std::cout << "*********************************" << std::endl;

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl ;

    }


    return 0;
}