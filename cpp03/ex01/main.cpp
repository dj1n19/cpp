/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:06:55 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/21 16:20:15 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ct1("CT1");
    
    ct1.attack("Gnah");
    ct1.takeDamage(3);
    ct1.beRepaired(5);

    ClapTrap ct2(ct1);
    ct2.attack("Gnih");
    ct2.takeDamage(12);
    ct2.beRepaired(10);

    ClapTrap ct3;

    ct3 = ct1;
    ct1.attack("Gnah");
    ct1.attack("Gnih");
    ct1.attack("Gnoh");
    ct1.attack("Gneh");
    ct1.attack("Gnuh");
    ct1.attack("Gnouh");
    ct1.attack("Gneuh");
    ct1.attack("Gnauh");
    ct1.attack("Gneih");
    ct1.beRepaired(10);   
}