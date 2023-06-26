/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:49:15 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/26 14:56:59 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_memory[i];
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
	*this = m;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& m)
{
	if (this == &m)
		return *this;
	for (int i = 0; i < 4; i++)
		this->_memory[i] = m._memory[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_memory[i])
		{
			this->_memory[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i]->getType() == type)
			return this->_memory[i]->clone();
	}
	return NULL;
}