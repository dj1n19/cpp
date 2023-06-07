/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 02:48:00 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 02:56:03 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(10, "gnah");

	for (int i = 0; i < 10; i++)
		horde[i].announce();

	delete [] horde;
}