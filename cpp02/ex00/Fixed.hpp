/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:39:49 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 17:39:49 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


class	Fixed
{

	public:
		~Fixed(void); // Destructor
		Fixed(void); // Default constructor
		Fixed(const Fixed &copy); // Copy constructor
		Fixed	&operator = (const Fixed &copy); // Copy assignment operator
		int		getRawBits(void) const; // returns the raw value of the fixed-point value
		void	setRawBits(const int raw); //  sets the raw value of the fixed-point number

	private:
		// Number of fractional bits (8 ---> 256 subdiv per int)
		static const int	fractbits = 8;
		// int that stores the fixpoint value, fp: [i][8_fb]
		int					i;

};

#endif
