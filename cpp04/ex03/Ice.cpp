/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:28:39 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 14:04:43 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice(void) {}

Ice::Ice(const Ice& i): AMateria(i)
{
	*this = i;
}

Ice& Ice::operator=(const Ice& i)
{
	if (this == &i)
		return *this;
	this->_type = i._type;
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *materia = new Ice();
	return materia;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots a ice bolt at " << target.getName() << "*" << std::endl;
}