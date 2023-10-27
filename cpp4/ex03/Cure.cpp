#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure( Cure const & src ) : AMateria("cure") {
	std::cout << "Cure copy constructor" << std::endl;
    *this = src;
}

Cure&   Cure::operator=( const Cure& rhs ) {
	std::cout << "Cure assignation operator called" << std::endl;
    if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}

void    Cure::use( ICharacter& target ) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}