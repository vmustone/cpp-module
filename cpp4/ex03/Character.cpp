#include "Character.hpp"

Character::Character(std::string name) {
	std::cout << "Character constructor called" << std::endl;
	_Name = name;
	for (int i = 0; i < 4; i++) {
		_inv[i] = NULL;
	} 
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_inv[i])
			delete _inv[i];
	}
}

Character::Character(const Character& other) {
	std::cout << "Character copy constructor called" << std::endl;
	_Name = other._Name;
	for (int i = 0; i < 4; i++)
         _inv[i] = other._inv[i];
}

Character& Character::operator=(const Character& other) {
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &other)
    {
        this->_Name = other._Name;
        for (int i = 0; i < 4; i++)
            this->_inv[i] = other._inv[i];
    }
    return *this;
}

void    Character::equip( AMateria* m ) {
	if (m == nullptr || m == NULL)
		return ;
    for (int i = 0; i < 4; i++)
        if (_inv[i] == NULL) {
            _inv[i] = m;
            std::cout << "Character " << _Name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << _Name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip( int idx ) {
    if (_inv[idx]) {
        _inv[idx] = NULL;
        std::cout << "Character " << _Name << " unequipped" << std::endl;
    } else {
        std::cout << "Character " << _Name << " can't unequip" << std::endl;
	}
}

void    Character::use( int idx, ICharacter& target ) {
    if (_inv[idx]) {
        _inv[idx]->use(target);
        std::cout << "Character " << _Name << " uses " << _inv[idx]->getType() << std::endl;
    } else {
        std::cout << "Character " << _Name << " can't use" << std::endl;
	}
}

std::string const& Character::getName() const {
    return _Name;
}