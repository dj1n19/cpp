/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:57:25 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 16:05:12 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog: default contructor called" << std::endl;
}

Dog::Dog(const Dog& d): Animal(d)
{
	std::cout << "Dog: copy constructor called" << std::endl;
	this->type = d.type;
	this->brain = new Brain(*d.brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(const Dog& d)
{
	std::cout << "Dog: copy assignment operator called" << std::endl;
	if (this == &d)
		return *this;
	this->type = d.type;
	delete this->brain;
	this->brain = new Brain(*d.brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Meuh !" << std::endl;
}
