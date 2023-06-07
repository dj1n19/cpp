/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 02:21:45 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 02:38:54 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie *zombie1;
	Zombie *zombie2;
	Zombie *zombie3;

	zombie1 = newZombie("gnah");
	zombie1->announce();
	zombie2 = newZombie("gnih");
	zombie2->announce();
	zombie3 = newZombie("gnoh");
	zombie3->announce();
	
	randomChump("gnauh");
	randomChump("gniuh");
	randomChump("gnouh");

	delete(zombie1);
	delete(zombie2);
	delete(zombie3);
}