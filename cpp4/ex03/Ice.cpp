#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "* Ice: materia is created *" << std::endl;
}

Ice::~Ice() {
    std::cout << "* Ice: ice is destroyed *" << std::endl;
}

Ice::Ice( Ice const & src ) : AMateria("ice") {
    std::cout << "* Ice: materia is copied *" << std::endl;
	*this = src;
}

Ice&   Ice::operator=( const Ice& rhs ) {
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target ) {
    std::cout << "I shoots an ice bolt at " << target.getName() << std::endl;
}