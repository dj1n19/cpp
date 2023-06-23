/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:37:37 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 14:19:37 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hp(10), ep(10), dmg(0)
{
    std::cout << "ClapTrap " << name << ": Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
    std::cout << "ClapTrap " << ct.name << ": Copy constructor called" << std::endl;
    this->name = ct.name;
    this->hp = ct.hp;
    this->ep = ct.ep;
    this->dmg = ct.dmg;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
    std::cout << "ClapTrap " << ct.name << ": Copy assignment operator called" << std::endl;
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
    std::cout << "ClapTrap " << this->name << ": Destructor called" << std::endl;
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