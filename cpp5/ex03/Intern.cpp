#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return (*this);
}

AForm*   Intern::makeForm(std::string formName, std::string target) {

    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm*    forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << " form" << std::endl;
    return nullptr;
}