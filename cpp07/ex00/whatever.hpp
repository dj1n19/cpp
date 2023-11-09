/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:23:50 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/08 16:38:37 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER__
#define __WHATEVER__

template <typename T> void swap(T& arg1, T& arg2)
{
	T tmp;
	
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T> T& min(T& val1, T& val2)
{
	if (val1 == val2)
		return val2;
	if (val1 < val2)
		return val1;
	return val2;
}

template <typename T> T& max(T& val1, T& val2)
{
	if (val1 == val2)
		return val2;
	if (val1 > val2)
		return val1;
	return val2;	
}

#endif