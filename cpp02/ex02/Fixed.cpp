/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <bgenie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 18:35:18 by bgenie            #+#    #+#             */
/*   Updated: 2023/06/21 14:44:10 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedNb = 0;
}

Fixed::Fixed(const Fixed& f)
{
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

Fixed& Fixed::operator=(const Fixed& f)
{
	if (this == &f)
		return *this;
	this->fixedNb = f.getRawBits();
	return *this;
}

bool Fixed::operator<(const Fixed& f) const
{
	if (this->getRawBits() < f.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed& f) const
{
	if (this->getRawBits() > f.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& f) const
{
	if (this->getRawBits() <= f.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& f) const
{
	if (this->getRawBits() >= f.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& f) const
{
	if (this->getRawBits() == f.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& f) const
{
	if (this->getRawBits() != f.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed& f) const
{
	return Fixed(this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(const Fixed& f) const
{
	return Fixed(this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(const Fixed& f) const
{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(const Fixed& f) const
{
	return Fixed(this->toFloat() / f.toFloat());
}

Fixed& Fixed::operator++(void)
{
	++this->fixedNb;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed cpy(*this);

	cpy.fixedNb = this->fixedNb++;
	return cpy;
}

Fixed& Fixed::operator--(void)
{
	--this->fixedNb;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed cpy(*this);

	cpy.fixedNb = this->fixedNb--;
	return cpy;
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 <= f2)
		return f1;
	return f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 <= f2)
		return f1;
	return f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 >= f2)
		return f1;
	return f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 >= f2)
		return f1;
	return f2;
}