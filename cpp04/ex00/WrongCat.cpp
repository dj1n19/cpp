/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:35:52 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 15:36:10 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat: default contructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& c): WrongAnimal(c)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
	this->type = c.type;
}

WrongCat& WrongCat::operator=(const WrongCat& c)
{
	std::cout << "WrongCat: copy assignment operator called" << std::endl;
	if (this == &c)
		return *this;
	this->type = c.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Cot Cot !" << std::endl;
}