#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExecute;
	
	public:
		AForm(const std::string& name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);

		std::string getName() const;
		bool getSigned() const;
		int	getGradeSign() const;
		int getGradeExecute() const;

		void beSigned(const Bureaucrat& bureaucrat);
		virtual void execute(const Bureaucrat& executor) const = 0;

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

	class NotSignedException : public std::exception {
        public:
            const char* what() const throw() { 
				return "Form not signed";}
    };
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif