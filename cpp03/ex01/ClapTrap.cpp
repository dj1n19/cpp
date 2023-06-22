/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:37:37 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/21 16:42:45 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << name << ": Constructor called" << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
    std::cout << ct.name << ": Copy constructor called" << std::endl;
    this->name = ct.name;
    this->hp = ct.hp;
    this->ep = ct.ep;
    this->dmg = ct.dmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
    std::cout << ct.name << ": Copy assignment operator called" << std::endl;
    if (this == &ct)
        return *this;
    this->name = ct.name;
    this->hp = ct.hp;
    this->ep = ct.ep;
    this->dmg = ct.dmg;
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->name << ": Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage !";
        this->ep--;
        std::cout << " (EP: " << this->ep << ")" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no energy points or hit points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!";
    if (this->hp < amount)
        this->hp = 0;
    else
        this->hp -= amount;
    std::cout << " (HP: " << this->hp << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name << " repaired itself for " << amount << " hit points!";
        this->hp += amount;
        this->ep--;
        std::cout << " (HP:" << this->hp << ",EP:" << this->ep << ")" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " has no energy points or hit points left!" << std::endl;
}