/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:48:57 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 14:07:59 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hp = 100;
    this->ep = 50;
    this->dmg = 20;
	std::cout << "ScavTrap " << name << ": Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << ": Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage !";
        this->ep--;
        std::cout << " (EP: " << this->ep << ")" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " has no energy points or hit points left!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode" << std::endl;
}