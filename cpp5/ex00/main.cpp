#include "Bureaucrat.hpp"

int main(void)
{
	try {
        Bureaucrat bureaucrat("Matti", 50);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
	
	try {
        Bureaucrat bureaucrat("seppo", 150);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

		bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

	try {
        Bureaucrat bureaucrat("Teppo", 1);
        std::cout << bureaucrat << std::endl;

		bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
		
		bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}