/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:06:55 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/23 14:15:27 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    {
        ClapTrap ct1("CT1");
    
        ct1.attack("Gnah");
        ct1.takeDamage(3);
        ct1.beRepaired(5);
    }

    std::cout << "====================" << std::endl;

    {
        ScavTrap st1("ST1");
    
        st1.attack("Gnah");
        st1.takeDamage(3);
        st1.beRepaired(5);
        st1.guardGate();
    }
}