/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:28:39 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 14:04:26 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::~Cure(void) {}

Cure::Cure(const Cure& c): AMateria(c)
{
	*this = c;
}

Cure& Cure::operator=(const Cure& c)
{
	if (this == &c)
		return *this;
	this->_type = c._type;
	return *this;
}

AMateria* Cure::clone() const
{
	Cure *materia = new Cure();
	return materia;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}