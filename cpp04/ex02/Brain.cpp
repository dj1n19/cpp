/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:51:52 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/24 03:48:11 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(const Brain& b)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& b)
{
	std::cout << "Brain: copy assignment operator called" << std::endl;
	if (this == &b)
		return *this;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
	return *this;
}