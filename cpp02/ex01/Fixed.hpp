/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:34:39 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/20 12:42:14 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	public:
	Fixed(void);
	Fixed(const Fixed& f);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);

	Fixed& operator=(const Fixed& f);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private:

	int					fixedNb;
	static const int	fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const & f);

#endif