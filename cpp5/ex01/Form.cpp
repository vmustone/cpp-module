#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) \
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::~Form() {
}

Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
}

Form& Form::operator=(const Form& other) {
	if (this != &other)
		_isSigned = getSigned();
	return *this;
}

std::string Form::getName(void) const {
	return _name;
}

bool Form::getSigned(void) const {
	return _isSigned;
}

int	Form::getGradeSign(void) const {
	return _gradeToSign;
}

int Form::getGradeExecute(void) const {
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form: " << form.getName() << ", Grade to Sign: " << form.getGradeSign() << ", Grade to Execute: " << form.getGradeExecute();
	return os;
}