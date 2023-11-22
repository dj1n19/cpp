/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:10:26 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/22 17:58:17 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int N): _size(N) {}

Span::~Span(void) {}

Span::Span(const Span& s)
{
	*this = s;	
}

Span& Span::operator=(const Span& s)
{
	if (this == &s)
		return *this;
	this->_size = s._size;
	this->_arr.assign(s._arr.begin(), s._arr.end());
	return *this;
}

void Span::addNumber(int n)
{
	if (this->_arr.size() == this->_size)
		throw FullArrayException();
	this->_arr.push_back(n);
}

unsigned int Span::shortestSpan(void)
{
	unsigned int span;
	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	if (this->_arr.size() <= 1)
		throw TooSmallArrayException();

	span = std::numeric_limits<unsigned int>::max();
	for (it1 = this->_arr.begin(); it1 != this->_arr.end() - 1; ++it1)
	{
		for (it2 = it1 + 1; it2 < this->_arr.end(); ++it2)
		{
			if (std::abs(*it1 - *it2) < span)
				span = std::abs(*it1 - *it2);
		}
	}
	return span;	
}

unsigned int Span::longestSpan(void)
{
	unsigned int min, max;
	std::vector<int>::iterator it;

	if (this->_arr.size() <= 1)
		throw TooSmallArrayException();
		
	min = std::numeric_limits<unsigned int>::max();
	max = 0;

	for (it = this->_arr.begin(); it != this->_arr.end(); ++it)
	{
		if (*it < min)
			min = *it;
		if (*it > max)
			max = *it;
	}
	return max - min;
}