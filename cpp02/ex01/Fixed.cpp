/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:19:39 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 18:19:39 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

static double ft_pow(double base, int exponent)
{
	double result = 1.0;
	int    exp = exponent;

	if (exp < 0)
	{
		base = 1.0 / base;
		exp = -exp;
	}
	while (exp > 0)
	{
		if (exp % 2 == 1)
			result *= base;
		base *= base;
		exp /= 2;
	}
	return (result);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	int	fractional;
	int	integer;

	std::cout << "Float constructor called" << std::endl;

	integer = nbr; //extraxt int
	fractional = roundf((nbr - integer) * ft_pow(2, 8)); //fract part * 256 and round
	i = integer << fractbits; //sllliiide to the left
	i += fractional;
}

Fixed::Fixed(const int nbr)
{
	i = nbr << fractbits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	i = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int				Fixed::getRawBits(void) const
{
	return (i);
}

Fixed			&Fixed::operator = (const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	i = copy.getRawBits();
	return (*this);
}

void			Fixed::setRawBits(const int raw)
{
	i = raw;
}

float			Fixed::toFloat(void) const
{
	return (i * ft_pow(2, -fractbits));
}

int				Fixed::toInt(void) const
{
	return (i >> fractbits);
}

std::ostream	&operator << (std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
