/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:39:48 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 16:50:01 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Minised.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	
	Minised *minised = new Minised(argv[1], argv[2], argv[3]);
	minised->replace();
	delete minised;
}