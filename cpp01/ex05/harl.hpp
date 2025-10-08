/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:09:11 by fmartusc          #+#    #+#             */
/*   Updated: 2025/07/21 17:09:11 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Harl {

	public:
		Harl();
		~Harl();

		void	complain( std::string level ) const;
	private:
		void	debug() const;
		void	info() const;
		void	warning() const;
		void	error() const;
};
