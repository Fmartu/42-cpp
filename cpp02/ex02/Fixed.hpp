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
# include <cmath>      // For pow() and roundf() functions
# include <iostream>   // For std::cout in constructors

/*
** Complete Fixed-point arithmetic class with full operator overloading
** This version includes comparison, arithmetic, and increment/decrement operators
** Also provides static min/max functions for Fixed objects
** Maintains 8 fractional bits (Q24.8 format)
*/
class			Fixed
{
	public:
		// Destructor - cleans up Fixed object
		~Fixed(void);

		// Default constructor - initializes to 0
		Fixed(void);

		// Float constructor - converts float to fixed-point
		Fixed(const float nbr);

		// Integer constructor - converts int to fixed-point
		Fixed(const int nbr);

		// Copy constructor - creates copy of existing Fixed
		Fixed(const Fixed &copy);
		// Returns raw integer representation
		int					getRawBits(void) const;

		// Static function: returns smaller of two const Fixed objects
		static Fixed		min(const Fixed &nbr1, const Fixed &nbr2);

		// Static function: returns smaller of two Fixed objects (non-const version)
		static Fixed		min(Fixed &nbr1, Fixed &nbr2);

		// Static function: returns larger of two const Fixed objects
		static Fixed		max(const Fixed &nbr1, const Fixed &nbr2);

		// Static function: returns larger of two Fixed objects (non-const version)
		static Fixed		max(Fixed &nbr1, Fixed &nbr2);
		// Assignment operator - copies value from another Fixed
		Fixed				&operator =(const Fixed &copy);

		// Comparison operators - compare two Fixed objects
		bool				operator >(const Fixed &nbr) const;   // Greater than
		bool				operator <(const Fixed &nbr) const;   // Less than
		bool				operator >=(const Fixed &nbr) const;  // Greater than or equal
		bool				operator <=(const Fixed &nbr) const;  // Less than or equal
		bool				operator ==(const Fixed &nbr) const;  // Equal to
		bool				operator !=(const Fixed &nbr) const;  // Not equal to
		// Arithmetic operators - return new Fixed object with result
		Fixed				operator +(const Fixed &nbr) const;   // Addition
		Fixed				operator -(const Fixed &nbr) const;   // Subtraction
		Fixed				operator *(const Fixed &nbr) const;   // Multiplication
		Fixed				operator /(const Fixed &nbr) const;   // Division
		// Increment/Decrement operators
		Fixed				&operator ++(void);       // Pre-increment (++a)
		Fixed				operator ++(int dummy);   // Post-increment (a++)
		Fixed				&operator --(void);       // Pre-decrement (--a)
		Fixed				operator --(int dummy);   // Post-decrement (a--)
		// Setter for raw value (bypasses conversion logic)
		void				setRawBits(const int raw);

		// Conversion functions
		float				toFloat(void) const;      // Convert to floating-point
		int					toInt(void) const;        // Convert to integer (truncate)
	private:
		// Number of bits reserved for fractional part (creates Q24.8 format)
		static const int	fractbits = 8;

		// Internal storage: upper 24 bits = integer, lower 8 bits = fraction
		int					i;
};

// Global output stream operator - enables printing Fixed objects
// Converts Fixed to float for display
std::ostream	&operator <<(std::ostream &str, Fixed const &fixed_nbr);

#endif
