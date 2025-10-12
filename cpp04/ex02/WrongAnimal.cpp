/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:46:14 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:46:15 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "\033[31mWrongAnimal default constructor called\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout << "\033[31mWrongAnimal parametric constructor called for " << type << "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\033[31mWrongAnimal destructor called for " << type << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "\033[31mWrongAnimal copy constructor called\033[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "\033[31mWrongAnimal assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "\033[31m* Wrong generic animal sound *\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}