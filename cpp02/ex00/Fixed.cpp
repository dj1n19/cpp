/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:35:18 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/19 19:01:02 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Constructor called" << std::endl;
	this->fixedNb = 0;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedNb = f.fixedNb;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &f)
		return *this;
	this->fixedNb = f.fixedNb;
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->fixedNb;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedNb = raw;
}