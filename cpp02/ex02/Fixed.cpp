/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:27:09 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 18:27:09 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

Fixed::~Fixed(void)
{
}

Fixed::Fixed(const float nbr)
{
	int	fractional;
	int	integer;

	integer = nbr;

	fractional = roundf((nbr - integer) * pow(2, 8));

	i = integer << fractbits;

	i += fractional;
}

Fixed::Fixed(const int nbr)
{
	i = nbr << fractbits;
}

Fixed::Fixed(void)
{
	i = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

int				Fixed::getRawBits(void) const
{
	return (i);
}

Fixed			Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1 > nbr2)
		return (nbr1);
	else
		return (nbr2);
}

Fixed			Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 > nbr2)
		return (nbr1);
	else
		return (nbr2);
}

Fixed			Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	else
		return (nbr2);
}

Fixed			Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	else
		return (nbr2);
}

Fixed			&Fixed::operator =(const Fixed &copy)
{
	i = copy.getRawBits();
	return (*this);
}

bool			Fixed::operator >(const Fixed &nbr) const
{
	bool	a = toFloat() > nbr.toFloat();

	return (a);
}

bool			Fixed::operator <(const Fixed &nbr) const
{
	bool	a = toFloat() < nbr.toFloat();

	return (a);
}

bool			Fixed::operator >=(const Fixed &nbr) const
{
	bool	a = toFloat() >= nbr.toFloat();

	return (a);
}

bool			Fixed::operator <=(const Fixed &nbr) const
{
	bool	a = toFloat() <= nbr.toFloat();

	return (a);
}

bool			Fixed::operator ==(const Fixed &nbr) const
{
	bool	a = toFloat() == nbr.toFloat();

	return (a);
}

bool			Fixed::operator !=(const Fixed &nbr) const
{
	bool	a = toFloat() != nbr.toFloat();

	return (a);
}

Fixed			Fixed::operator +(const Fixed &nbr) const
{
	Fixed	a(toFloat() + nbr.toFloat());

	return (a);
}

Fixed			Fixed::operator -(const Fixed &nbr) const
{
	Fixed	a(toFloat() - nbr.toFloat());

	return (a);
}

Fixed			Fixed::operator *(const Fixed &nbr) const
{
	Fixed	a(toFloat() * nbr.toFloat());

	return (a);
}

Fixed			Fixed::operator /(const Fixed &nbr) const
{
	Fixed	a(toFloat() / nbr.toFloat());

	return (a);
}

Fixed			&Fixed::operator ++(void)
{
	i++;

	return (*this);
}

Fixed			Fixed::operator ++(int dummy)
{
	Fixed	old(*this);

	(void)dummy;

	i++;

	return (old);
}

Fixed			&Fixed::operator --(void)
{
	i--;

	return (*this);
}

Fixed			Fixed::operator --(int dummy)
{
	Fixed	old(*this);

	(void)dummy;

	i--;

	return (old);
}

void			Fixed::setRawBits(const int raw)
{
	i = raw;
}

float			Fixed::toFloat(void) const
{
	return (i * (1.0f / (1 << fractbits)));
}

int				Fixed::toInt(void) const
{
	return (i >> fractbits);
}

std::ostream	&operator <<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
