/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarakoto <rarakoto@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:02:37 by rarakoto          #+#    #+#             */
/*   Updated: 2025/01/16 14:25:27 by rarakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main (void)
{
	{
		//MateriaSource class test
		// IMateriaSource	*src = new MateriaSource;
		// AMateria		*ice_mat;
		// AMateria		*cure_mat;
		// AMateria		*non_existant_mat;
		//
		// src->learnMateria(new Ice());
		// src->learnMateria(new Cure());
		// ice_mat = src->createMateria("ice");
		// cure_mat = src->createMateria("cure");
		// non_existant_mat = src->createMateria("skjdkaj");
		// std::cout << "ice_mat: getType() == " << ice_mat->getType() << std::endl;
		// std::cout << "cure_mat: getType() == " << cure_mat->getType() << std::endl;
		// if (!non_existant_mat)
		// 	std::cout << "non_existant_mat are OK\n";
		// else
		// 	std::cout << "non_existant_mat are KO\n";
		// delete src;
		// delete ice_mat;
		// delete cure_mat;
	}
	{
		//Character Class Test
		//Basic Test
		{
			// ICharacter	*me = new Character("me");
			// ICharacter	*Bob = new Character("Bob");
			// ICharacter	*old_me = me;
			// Ice			mat;
			//
			// me->equip(new Ice());
			// me->equip(new Cure());
			// me->equip(new Cure());
			// me->equip(new Ice());
			// me->equip(static_cast<AMateria *>(&mat));
			// static_cast<Character *>(me)->print_inventory();
			// me->use(2, *Bob);
			// me->use(3, *Bob);
			// me->use(4, *Bob);
			// me->use(1, *Bob);
			// me->use(0, *Bob);
			// me->unequip(0);
			// me->unequip(0);
			// me->unequip(1);
			// me->unequip(2);
			// me->use(3, *Bob);
			// me->unequip(0);
			// me->unequip(1);
			// me->unequip(2);
			// me->unequip(3);
			// me->unequip(10);
			// static_cast<Character *>(me)->print_inventory();
			// me->use(0, *Bob);
			// me->use(1, *Bob);
			// me->use(2, *Bob);
			// me->use(3, *Bob);
			//
			// Bob->equip(new Cure());
			// Bob->equip(new Cure());
			// Bob->equip(new Cure());
			// Bob->equip(new Cure());
			//
			// me = Bob;
			//
			// delete old_me;
			// delete me;
		}
		//Deep Copy Test
		{
			// Character	me("me");
			// Character	Bob("Bob");
			//
			// me.equip(new Ice());
			// me.equip(new Ice());
			// me.equip(new Ice());
			// me.equip(new Ice());
			// me.use(0, Bob);
			// me.use(1, Bob);
			// me.use(2, Bob);
			// me.use(3, Bob);
			//
			// Bob.equip(new Cure());
			// Bob.equip(new Cure());
			// Bob.equip(new Cure());
			// Bob.equip(new Cure());
			//
			// me = Bob;
			// me.use(0, Bob);
			// me.use(1, Bob);
			// me.use(2, Bob);
			// me.use(3, Bob);
		}
	}
	{
		//Subject Test
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return 0;
}
