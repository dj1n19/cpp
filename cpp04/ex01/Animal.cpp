/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:44:08 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 18:10:35 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Aninal: default constructor called" << std::endl;
}

Animal::Animal(const Animal& a)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	this->type = a.type;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Animal: copy assignment operator called" << std::endl;
	if (this == &a)
		return *this;
	this->type = a.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "* Undefined animal sound *" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}