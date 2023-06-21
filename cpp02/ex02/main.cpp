/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:20:33 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/21 14:40:23 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2.5f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "b + c = " << b + c << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	std::cout << "b * c = " << b * c << std::endl;
	std::cout << "b / c = " << b / c << std::endl;
	std::cout << "b < c ->" << (b < c) << std::endl;
	std::cout << "b > c ->" << (b > c) << std::endl;
	std::cout << "b <= c ->" << (b <= c) << std::endl;
	std::cout << "b >= c ->" << (b >= c) << std::endl;
	std::cout << "b == c ->" << (b == c) << std::endl;
	std::cout << "a == a ->" << (a == a) << std::endl;
	std::cout << "b != c ->" << (b != c) << std::endl;
	std::cout << "a != a ->" << (a != a) << std::endl;
	std::cout << "++ prefix -> " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++ postfix -> "<< a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max(a=" << a << ",b=" << b << "): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a=" << a << ",b=" << b << "): " << Fixed::min(a, b) << std::endl;

	return 0;
}