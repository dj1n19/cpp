/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:50:05 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 16:58:03 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

void app(std::string& s)
{
	s.append("hhhh");
}

void inc(int& i)
{
	i++;
}

int main(void)
{
	int arr_i[5] = {1,2,3,4,5};
	
	iter<int>(arr_i, static_cast<size_t>(5), inc);
	for(int i = 0; i < 5; i++)
		std::cout << arr_i[i] << std::endl;

	std::string arr_s[5] = {"gnah","gnih","gneh","gnouh","gneuh"};
	
	iter<std::string>(arr_s, static_cast<size_t>(5), app);
	for(int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;

	return 0;
}