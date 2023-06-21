/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:34:39 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/19 19:24:57 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
	public:
	Fixed(void);
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:

	int					fixedNb;
	static const int	fractionalBits = 8;
};

#endif