#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
    {
        Intern  someRandomIntern;
        AForm*   rrf;

        rrf = someRandomIntern.makeForm("robotomy", "Bender");
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }

    try {
        Bureaucrat bureaucrat("ash", 2);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");


        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);

        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);

        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}