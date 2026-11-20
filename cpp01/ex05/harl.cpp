/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:08:54 by fmartusc          #+#    #+#             */
/*   Updated: 2025/07/21 17:08:54 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <string>
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() const {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my"
		"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
	return;
}

void	Harl::info() const {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
		<< "You didn’t put enough bacon in my burger!"
		" If you did, I wouldn’t be asking for more!"
		<< std::endl;
	return;
}

void	Harl::warning() const {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl
		<< "I’ve been coming for years whereas you started working here since last month."
		<< std::endl;
	return;
}

void	Harl::error() const {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
	return;
}

void	Harl::complain( std::string level ) const {
	void	(Harl::*const level_fn[4]) ( void ) const = {
		(&Harl::error),
		(&Harl::info),
		(&Harl::debug),
		(&Harl::warning)
	};
	const std::string	level_str[4] = {
		"ERROR",
		"INFO",
		"DEBUG",
		"WARNING"
	};

	for (int i = 0; i < 4; i++) {
		if (level_str[i] == level) {
			(this->*level_fn[i])();
			return;
		}
	}
	std::cerr << "[ Grrrrr ]" << std::endl;
	return;
}
