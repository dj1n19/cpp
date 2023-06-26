/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:57:25 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 16:03:13 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat: default contructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat: destructor called" << std::endl;
}

Cat::Cat(const Cat& c): Animal(c)
{
	this->type = c.type;
	this->brain = new Brain(*c.brain);
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& c)
{
	std::cout << "Cat: copy assignment operator called" << std::endl;
	if (this == &c)
		return *this;
	this->type = c.type;
	delete this->brain;
	this->brain = new Brain(*c.brain);
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cot Cot !" << std::endl;
}
