/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:57:16 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/09 14:09:23 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> arrInt(10);
	for (unsigned int i = 0; i < arrInt.size(); i++)
		std::cout << arrInt[i] << " ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < arrInt.size(); i++)
		arrInt[i] = i * 10;
	try
	{
		for (unsigned int i = 0; i < arrInt.size() + 1; i++)
			std::cout << arrInt[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Array<std::string> arrStr(10);
	for (unsigned int i = 0; i < arrStr.size(); i++)
		std::cout << arrStr[i] << " ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < arrStr.size(); i++)
		arrStr[i] = arrStr[i].append("GNAH");
	try
	{
		for (unsigned int i = 0; i < arrStr.size() + 1; i++)
			std::cout << arrStr[i] << " ";
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;	
}