/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:31:38 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 18:33:11 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAninal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	this->type = a.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	std::cout << "WrongAnimal: copy assignment operator called" << std::endl;
	if (this == &a)
		return *this;
	this->type = a.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "* Undefined animal sound *" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}