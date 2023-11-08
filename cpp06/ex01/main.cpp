/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:36 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 15:19:12 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
#include <cstdint>

int main(void)
{
	Data d;
	Data* ptr;
	uintptr_t raw;

	d.i = 42;
	d.s = "gnah";
	std::cout << "Data: " << d.i << ", " << d.s << std::endl;
	std::cout << &d << std::endl;
	raw = Serializer::serialize(&d);
	ptr = Serializer::deserialize(raw);
	std::cout << ptr << std::endl;
	std::cout << "Data: " << ptr->i << ", " << ptr->s << std::endl;
	return 0;	
}