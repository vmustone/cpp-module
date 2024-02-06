#include "AForm.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) \
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {
}

AForm::AForm(const AForm& other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
}

AForm& AForm::operator=(const AForm& other) {
	if (this != &other)
		_isSigned = getSigned();
	return *this;
}

std::string AForm::getName(void) const {
	return _name;
}

bool AForm::getSigned(void) const {
	return _isSigned;
}

int	AForm::getGradeSign(void) const {
	return _gradeToSign;
}

int AForm::getGradeExecute(void) const {
	return _gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
	os << "Form: " << form.getName() << ", Grade to Sign: " << form.getGradeSign() << ", Grade to Execute: " << form.getGradeExecute();
	return os;
}