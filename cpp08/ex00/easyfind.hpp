/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:20:55 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/09 19:06:50 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND__
#define __EASYFIND__
#include <algorithm>
#include <exception>
#include <iostream>

class NoOccurenceException : std::exception
{
	public :
	
		const char* what(void)
		{
			return "no occurence found";
		}
};

template <typename T> void easyfind(T& container, int i)
{
	typename T::iterator it;
	
	it = find(container.begin(), container.end(), i);
	if (it == container.end())
		throw NoOccurenceException();
	else
		std::cout << "occurence found" << std::endl;
}

#endif