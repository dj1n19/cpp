/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:35:18 by bgenie            #+#    #+#             */
/*   Updated: 2023/11/13 16:37:42 by bgenie           ###   ########.fr       */
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
	this->fixedNb = f.getRawBits();
}

Fixed::Fixed(int const value)
{
	this->fixedNb = value << this->fractionalBits;	
}

Fixed::Fixed(float const value)
{
	this->fixedNb = static_cast<int>(roundf(value * (1 << this->fractionalBits)));
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
	this->fixedNb = f.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& o, Fixed const & f)
{
	o << f.toFloat();
	return o;
}

int Fixed::getRawBits(void) const
{
	return this->fixedNb;
}

void Fixed::setRawBits(int const raw)
{
	this->fixedNb = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->getRawBits()) / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->fractionalBits);
}