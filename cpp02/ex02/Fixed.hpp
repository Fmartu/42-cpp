/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:28:33 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 18:28:33 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <ostream>
# include <cmath>
# include <iostream>

/*
** Complete Fixed-point arithmetic class with full operator overloading
** This version includes comparison, arithmetic, and increment/decrement operators
** Also provides static min/max functions for Fixed objects
** Maintains 8 fractional bits (Q24.8 format)
*/
class			Fixed
{
	public:
		~Fixed(void);

		Fixed(void);

		Fixed(const float nbr);

		Fixed(const int nbr);

		Fixed(const Fixed &copy);
		int					getRawBits(void) const;

		static Fixed		min(const Fixed &nbr1, const Fixed &nbr2);

		static Fixed		min(Fixed &nbr1, Fixed &nbr2);

		static Fixed		max(const Fixed &nbr1, const Fixed &nbr2);

		static Fixed		max(Fixed &nbr1, Fixed &nbr2);
		Fixed				&operator =(const Fixed &copy);

		bool				operator >(const Fixed &nbr) const;
		bool				operator <(const Fixed &nbr) const;
		bool				operator >=(const Fixed &nbr) const;
		bool				operator <=(const Fixed &nbr) const;
		bool				operator ==(const Fixed &nbr) const;
		bool				operator !=(const Fixed &nbr) const;
		Fixed				operator +(const Fixed &nbr) const;
		Fixed				operator -(const Fixed &nbr) const;
		Fixed				operator *(const Fixed &nbr) const;
		Fixed				operator /(const Fixed &nbr) const;
		Fixed				&operator ++(void);
		Fixed				operator ++(int dummy);
		Fixed				&operator --(void);
		Fixed				operator --(int dummy);
		void				setRawBits(const int raw);

		float				toFloat(void) const;
		int					toInt(void) const;
	private:
		static const int	fractbits = 8;

		int					i;
};

std::ostream	&operator <<(std::ostream &str, Fixed const &fixed_nbr);

#endif
