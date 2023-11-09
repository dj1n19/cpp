/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:49:56 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/09 19:12:40 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	
	try
	{
		easyfind(vec, 5);
		easyfind(vec, 50);
	}
	catch(NoOccurenceException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::deque<int> deque;
	for (int i = 0; i < 10; i++)
		deque.push_back(i);

	try
	{
		easyfind(deque, 5);
		easyfind(deque, 50);
	}
	catch(NoOccurenceException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}