#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("John", 2);
        Form form("FormA", 2, 2);

        bureaucrat.signForm(form);
        std::cout << form << std::endl;

		Bureaucrat bureaucrat2("Matti", 149);
        Form form2("FormB", 60, 70);

        bureaucrat2.signForm(form2);
		std::cout << form2 << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
