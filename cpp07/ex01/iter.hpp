/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:43:09 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/21 18:19:06 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER__
#define __ITER__
#include <cstdlib>

template <typename T> void iter(T* ptr, size_t n, void (*func)(T&))
{
	for(size_t i = 0; i < n; i++)
	{
		func(ptr[i]);
	}
}

#endif