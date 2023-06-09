/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:32:51 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/09 12:40:08 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl *harl = new Harl();

	if (argc == 1)
	{
		harl->complain("DEBUG");
		harl->complain("INFO");
		harl->complain("WARNING");
		harl->complain("ERROR");
	}
	else
	{
		for (int i = 0; argv[i]; i++)
			harl->complain(argv[i]);
	}
	delete harl;
	return (0);
}