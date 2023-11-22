/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:05:57 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/22 17:36:48 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__
#define __SPAN__
#include <exception>
#include <limits>
#include <cstdlib>
#include <vector>
#include <iterator>

class Span
{
	private:

		std::vector<int>	_arr;
		unsigned int		_size;

	public:

		class FullArrayException: std::exception
		{
			const char* what(void)
			{
				return "the array is full";
			}
		};

		class TooSmallArrayException: std::exception
		{
			const char* what(void)
			{
				return "the array is too small";
			}
		};

		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span& s);
		Span& operator=(const Span& s);

		void			addNumber(int n);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif