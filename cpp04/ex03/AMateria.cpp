/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:23:49 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/25 23:28:06 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria& m)
{
	*this = m;
}

AMateria& AMateria::operator=(const AMateria& m)
{
	if (this == &m)
		return *this;
	this->_type = m._type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria (" << this->getType() << ") used on " << target.getName() << std::endl;
}