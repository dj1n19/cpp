/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:49:36 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/09 13:22:26 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		return 0;
	
	Harl *harl = new Harl();
	harl->complain(argv[1]);

	delete harl;
	return 0;
}