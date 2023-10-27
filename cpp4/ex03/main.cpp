#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* Matti = new Character("Matti");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    Matti->equip(tmp);
    tmp = src->createMateria("cure");
	tmp = src->createMateria("cusdgre");
    Matti->equip(tmp);

    ICharacter* Teppo = new Character("Teppo");

    Matti->use(0, *Teppo);
    Matti->use(1, *Teppo);
	Matti->unequip(1);

    delete Teppo;
    delete Matti;
    delete src;

    return 0;
}