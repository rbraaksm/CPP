/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/02 15:34:21 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/04 13:52:22 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Water.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int			main(void)
{
// 	IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
		IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\n>>>Interestering cases for this subject<<<\n" << std::endl;

	std::cout << "\n->Trying to add a type that's not yet part of the Source inventory:" << std::endl;
	tmp = src->createMateria("water");
	std::cout << "\n->Now the type has been added to the Materia Source inventory and can be created:" << std::endl;
	src->learnMateria(new Water());
	tmp = src->createMateria("water");
	std::cout << "\n->Now lets make the Materia Source inventory full:" << std::endl;
	src->learnMateria(new Water());
	src->learnMateria(new Cure());


	std::cout << "\n\n->Full inventory for character " << me->getName() << " example:" << std::endl;
	tmp = src->createMateria("water");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->printInventory();
	tmp = me->getMateria(0);
	me->unequip(0);
	me->printInventory();
	delete tmp;

	Character *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);

	tmp = src->createMateria("water");
	me->equip(tmp);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(3, *bob);


	Character *me2 = new Character("Ash");
	tmp = src->createMateria("ice");
	me2->equip(tmp);
	tmp = src->createMateria("cure");
	me2->equip(tmp);
	tmp = src->createMateria("ice");
	me2->equip(tmp);
	me2->printInventory();

	std::cout << std::endl << "----COPY CONSTRUCTOR---" << std::endl << std::endl;
	Character *me3 = new Character(*me2);
	me3->printInventory();

	std::cout << std::endl << std::endl <<"-----ASSIGNATION----" << std::endl;
	*me3 = *me;
	me3->printInventory();

	delete bob;
	delete me;
	delete me2;
	delete me3;
	delete src;
	return (0);
}