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
		Fixed(const float nbr);
		Fixed(const int nbr);
		Fixed(const Fixed &copy);

		Fixed	&operator = (const Fixed &copy);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

	private:
		static const int	fractbits = 8;
		int					i;

};

std::ostream	&operator << (std::ostream &str, Fixed const &fixed_nbr);

#endif
