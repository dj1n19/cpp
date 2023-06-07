/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 02:58:26 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/07 03:12:34 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address:   [" << &string << "]" << std::endl;
	std::cout << "pointer:   [" << stringPTR << "]" << std::endl;
	std::cout << "reference: [" << &stringREF << "]" << std::endl;

	std::cout << "string:    [" << string << "]" << std::endl;
	std::cout << "pointer:   [" << *stringPTR << "]" << std::endl;
	std::cout << "reference: [" << stringREF << "]" << std::endl;
}