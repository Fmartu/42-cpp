/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:17:26 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 18:17:26 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <ostream>
# include <cmath>

class			Fixed
{

	public:
		~Fixed(void);
		Fixed(void);
		Fixed(const float nbr); // Float constructor, float to fixed-point
		Fixed(const int nbr); // Int constructor, int to f-p
		Fixed(const Fixed &copy); // Copy constr, fixed 4rm fixed

		Fixed	&operator = (const Fixed &copy); // Assignment op, copies 4rm fixed

		float	toFloat(void) const; //fixed-point to float-point
		int		toInt(void) const; //fixed-point to int
		int		getRawBits(void) const; //getter
		void	setRawBits(const int raw); //setter


	private:
		static const int	fractbits = 8; // Number of bits reserved for fractional part
		int					i;

};

std::ostream	&operator << (std::ostream &str, Fixed const &fixed_nbr); //output  ostream simile  acout

#endif
