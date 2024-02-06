#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator=(const Bureaucrat& other);
		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form& form);

	class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw() {
            return "grade is too high!";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw() {
            return "grade is too low!";
        }
    };
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
#endif