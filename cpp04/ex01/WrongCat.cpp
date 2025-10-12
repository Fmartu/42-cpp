/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:43:54 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:43:56 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "\033[91mWrongCat constructor called\033[0m" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "\033[91mWrongCat destructor called\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "\033[91mWrongCat copy constructor called\033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "\033[91mWrongCat assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "\033[91mWrong Meow! Wrong Meow! 😾\033[0m" << std::endl;
}