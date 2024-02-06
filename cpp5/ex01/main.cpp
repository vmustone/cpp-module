#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 2);
        Form form("FormA", 2, 2);

        bureaucrat.signForm(form);
        std::cout << form << std::endl;

        Form form2("FormB", 60, 70);
        bureaucrat.signForm(form2); // This will throw GradeTooLowException
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}