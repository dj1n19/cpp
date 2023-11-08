/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:39:02 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 16:06:23 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base* generate(void)
{
	Base *b;
	int r = std::rand() % 3;
	switch(r)
	{
		case 0:
			std::cout << "generate A class" << std::endl;
			b = new A();
			break;
		case 1:
			std::cout << "generate B class" << std::endl;
			b = new B();
			break;
		case 2:
			std::cout << "generate C class" << std::endl;
			b = new C();
			break;
	}
	return b;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	std::srand(std::time(NULL));
	
	Base* b1 = generate();
	identify(b1);
	identify(*b1);
	delete b1;
	
	std::cout << "====================" << std::endl;

	Base* b2 = generate();
	identify(b2);
	identify(*b2);
	delete b2;
	
	std::cout << "====================" << std::endl;
	
	Base* b3 = generate();
	identify(b3);
	identify(*b3);
	delete b3;
}