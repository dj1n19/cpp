/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:48:16 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 14:29:04 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *zoo[10];

	for (int i = 0; i < 5; i++)
		zoo[i] = new Cat();
	for (int i = 5; i < 10; i++)
		zoo[i] = new Dog();

	for (int i = 0; i < 10; i++)
		zoo[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete zoo[i];

	std::cout << "====================" << std::endl;

	Cat c1 = Cat();
	Cat c2 = c1;
	Cat c3 = Cat(c2);

	return 0;
}
