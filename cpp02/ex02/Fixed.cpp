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
#include <iostream>  // For std::cout
#include <cmath>     // For pow() and roundf() functions
#include <cstdlib>   // For EXIT_FAILURE in main

// Destructor: called when Fixed object is destroyed
// No cleanup needed in this implementation
Fixed::~Fixed(void)
{
	// Silent destructor - no debug output in this version
}

// Float constructor: converts floating-point number to fixed-point format
// Uses Q24.8 format (24 integer bits, 8 fractional bits)
Fixed::Fixed(const float nbr)
{
	int	fractional;
	int	integer;

	// Extract integer part by truncation
	integer = nbr;

	// Calculate fractional part: multiply by 2^8 and round
	// This gives us the fractional part in the range [0, 255]
	fractional = roundf((nbr - integer) * pow(2, 8));

	// Place integer part in upper bits (shift left by 8)
	i = integer << fractbits;

	// Add fractional part to lower 8 bits
	i += fractional;
}

// Integer constructor: converts integer to fixed-point format
Fixed::Fixed(const int nbr)
{
	// Shift left by 8 bits to place integer in upper portion
	// Fractional part becomes 0 (no decimal places)
	i = nbr << fractbits;
}

// Default constructor: initializes to 0.0 in fixed-point format
Fixed::Fixed(void)
{
	// Set raw value to 0 (represents 0.0)
	i = 0;
}

// Copy constructor: creates new Fixed as copy of existing one
Fixed::Fixed(const Fixed &copy)
{
	// Use assignment operator to perform the copy
	*this = copy;
}

// Returns the raw integer representation
// No debug output in this optimized version
int				Fixed::getRawBits(void) const
{
	// Return internal integer value directly
	return (i);
}

// Static function: returns the larger of two const Fixed objects
Fixed			Fixed::max(const Fixed &nbr1, const Fixed &nbr2)
{
	// Use overloaded > operator to compare
	if (nbr1 > nbr2)
		return (nbr1);  // Return copy of larger value
	else
		return (nbr2);  // Return copy of smaller or equal value
}

// Static function: returns the larger of two Fixed objects (non-const version)
// Allows modification of returned object
Fixed			Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	// Use overloaded > operator to compare
	if (nbr1 > nbr2)
		return (nbr1);  // Return reference to larger value
	else
		return (nbr2);  // Return reference to smaller or equal value
}

// Static function: returns the smaller of two const Fixed objects
Fixed			Fixed::min(const Fixed &nbr1, const Fixed &nbr2)
{
	// Use overloaded < operator to compare
	if (nbr1 < nbr2)
		return (nbr1);  // Return copy of smaller value
	else
		return (nbr2);  // Return copy of larger or equal value
}

// Static function: returns the smaller of two Fixed objects (non-const version)
// Allows modification of returned object
Fixed			Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	// Use overloaded < operator to compare
	if (nbr1 < nbr2)
		return (nbr1);  // Return reference to smaller value
	else
		return (nbr2);  // Return reference to larger or equal value
}

// Assignment operator: copies value from another Fixed object
// No debug output in this optimized version
Fixed			&Fixed::operator =(const Fixed &copy)
{
	// Copy the raw integer value
	i = copy.getRawBits();
	// Return reference to this object for chaining
	return (*this);
}

// Greater than operator: compares two Fixed objects
// Converts to float for comparison to handle fractional parts correctly
bool			Fixed::operator >(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	// This ensures proper handling of fractional parts
	bool	a = toFloat() > nbr.toFloat();

	return (a);
}

// Less than operator: compares two Fixed objects
bool			Fixed::operator <(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	bool	a = toFloat() < nbr.toFloat();

	return (a);
}

// Greater than or equal operator: compares two Fixed objects
bool			Fixed::operator >=(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	bool	a = toFloat() >= nbr.toFloat();

	return (a);
}

// Less than or equal operator: compares two Fixed objects
bool			Fixed::operator <=(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	bool	a = toFloat() <= nbr.toFloat();

	return (a);
}

// Equality operator: checks if two Fixed objects are equal
bool			Fixed::operator ==(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	// Note: floating-point equality can be imprecise
	bool	a = toFloat() == nbr.toFloat();

	return (a);
}

// Inequality operator: checks if two Fixed objects are not equal
bool			Fixed::operator !=(const Fixed &nbr) const
{
	// Convert both operands to float and compare
	bool	a = toFloat() != nbr.toFloat();

	return (a);
}

// Addition operator: adds two Fixed objects and returns new Fixed
Fixed			Fixed::operator +(const Fixed &nbr) const
{
	// Convert both operands to float, add them, then convert back to Fixed
	// This ensures proper handling of fractional arithmetic
	Fixed	a(toFloat() + nbr.toFloat());

	return (a);
}

// Subtraction operator: subtracts second Fixed from first, returns new Fixed
Fixed			Fixed::operator -(const Fixed &nbr) const
{
	// Convert both operands to float, subtract, then convert back to Fixed
	Fixed	a(toFloat() - nbr.toFloat());

	return (a);
}

// Multiplication operator: multiplies two Fixed objects, returns new Fixed
Fixed			Fixed::operator *(const Fixed &nbr) const
{
	// Convert both operands to float, multiply, then convert back to Fixed
	Fixed	a(toFloat() * nbr.toFloat());

	return (a);
}

// Division operator: divides first Fixed by second, returns new Fixed
Fixed			Fixed::operator /(const Fixed &nbr) const
{
	// Convert both operands to float, divide, then convert back to Fixed
	// Note: No division by zero check in this implementation
	Fixed	a(toFloat() / nbr.toFloat());

	return (a);
}

// Pre-increment operator (++a): increments and returns reference to this object
Fixed			&Fixed::operator ++(void)
{
	// Increment the raw value by 1 (smallest possible increment)
	// This adds 1/256 to the value due to 8 fractional bits
	i++;

	// Return reference to this object (already incremented)
	return (*this);
}

// Post-increment operator (a++): returns old value, then increments this object
Fixed			Fixed::operator ++(int dummy)
{
	// Save current state before incrementing
	Fixed	old(*this);

	// Dummy parameter distinguishes post from pre-increment
	(void)dummy;

	// Increment the raw value
	i++;

	// Return the old value (before increment)
	return (old);
}

// Pre-decrement operator (--a): decrements and returns reference to this object
Fixed			&Fixed::operator --(void)
{
	// Decrement the raw value by 1 (smallest possible decrement)
	// This subtracts 1/256 from the value due to 8 fractional bits
	i--;

	// Return reference to this object (already decremented)
	return (*this);
}

// Post-decrement operator (a--): returns old value, then decrements this object
Fixed			Fixed::operator --(int dummy)
{
	// Save current state before decrementing
	Fixed	old(*this);

	// Dummy parameter distinguishes post from pre-decrement
	(void)dummy;

	// Decrement the raw value
	i--;

	// Return the old value (before decrement)
	return (old);
}

// Sets the raw integer value directly (bypasses conversion logic)
void			Fixed::setRawBits(const int raw)
{
	// Directly assign raw value to internal storage
	// Use with caution - no validation or conversion
	i = raw;
}

// Converts fixed-point number back to floating-point representation
float			Fixed::toFloat(void) const
{
	// Multiply by 2^(-8) = 1/256 to convert from Q24.8 to float
	// This reverses the fixed-point scaling
	return (i * ft_pow(2, -fractbits));
}

// Converts fixed-point number to integer (truncates fractional part)
int				Fixed::toInt(void) const
{
	// Right shift by 8 bits to remove fractional part
	// Equivalent to integer division by 256
	return (i >> fractbits);
}

// Global output stream operator: enables printing Fixed objects with std::cout
// Converts Fixed to float for human-readable display
std::ostream	&operator <<(std::ostream &str, Fixed const &fixed_nbr)
{
	// Convert Fixed to float and output to stream
	return (str << fixed_nbr.toFloat());
}
