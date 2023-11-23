/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:12:28 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/23 04:54:42 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(void)
{
	{
		std::cout << "===== MAIN =====" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}

	{
		std::cout << "===== EXCEPTION =====" << std::endl;
	
		Span span(1);
		span.addNumber(1);
		try
		{
			span.addNumber(2);
		}
		catch(const Span::FullArrayException& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			span.shortestSpan();
		}
		catch(const Span::TooSmallArrayException& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			span.longestSpan();
		}
		catch(const Span::TooSmallArrayException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << "===== FILL =====" << std::endl;

		std::vector<int> vec;
		std::cout << "Generating vector..." << std::endl;
		for (unsigned int i = 0; i < 20000; ++i)
		{
			vec.push_back(rand() % 20000 + 1);
		}
		std::vector<int>::iterator start = vec.begin();
		std::vector<int>::iterator end = vec.end();
		std::cout << "Filling span..." << std::endl;
		Span span(20000);
		try
		{
			span.fill(start, end);
			std::cout << "shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "longest span: " << span.longestSpan() << std::endl;
		}
		catch(const Span::FullArrayException& e)
		{
			std::cerr << e.what() << '\n';
		}
		catch(const Span::TooSmallArrayException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}