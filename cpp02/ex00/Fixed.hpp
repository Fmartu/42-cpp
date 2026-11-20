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
		~Fixed(void);
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed	&operator = (const Fixed &copy);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

	private:
		static const int	fractbits = 8;
		int					i;

};

#endif
