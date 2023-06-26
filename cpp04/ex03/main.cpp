/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:46:00 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 14:53:59 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	Character gnah("Gnah");

	AMateria* save ;
	save = src->createMateria("cure");
	gnah.equip(save);	
	gnah.equip(src->createMateria("ice"));	
	gnah.equip(src->createMateria("cure"));	
	gnah.equip(src->createMateria("ice"));	
	gnah.equip(src->createMateria("cure"));	

	Character gnih(gnah);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "==========" << std::endl;
	gnah.use(0, *bob);
	gnah.use(1, *bob);
	gnah.use(2, *bob);
	gnah.use(3, *bob);
	gnah.use(4, *bob);
	std::cout << "==========" << std::endl;
	gnih.use(0, *bob);
	gnih.use(1, *bob);
	gnih.use(2, *bob);
	gnih.use(3, *bob);

	std::cout << "==========" << std::endl;
	gnah.unequip(0);
	gnah.use(0, *bob);

	delete save;
	delete me;
	delete bob;
	delete src;
	
	return 0;
}