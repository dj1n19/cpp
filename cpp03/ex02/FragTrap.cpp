/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:56:02 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 14:03:13 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
	std::cout << "FragTrap " << name << ": Constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << ": Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": HighFives?" << std::endl;
}