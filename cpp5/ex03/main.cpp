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


        bureaucrat.signAForm(form1);
        bureaucrat.executeForm(form1);

        bureaucrat.signAForm(form2);
        bureaucrat.executeForm(form2);
    
        bureaucrat.signAForm(form3);
        bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
/*
int main()
{
	std::cout << "==================================================" << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat Steve("Steve",1);
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Wrong request", "Bender");
		rrf = someRandomIntern.makeForm("presidental request", "Bender");
		Steve.signAForm(*rrf);
		Steve.executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		Intern* someRandomInternCopy = new Intern(someRandomIntern);
		Bureaucrat Steve("Steve",1);
		AForm* rrf;
		rrf = someRandomInternCopy->makeForm("presidental request", "Bender");
		Steve.signAForm(*rrf);
		Steve.executeForm(*rrf);
		delete rrf;
	}
	std::cout << "==================================================" << std::endl;
	return (0);
}
*/