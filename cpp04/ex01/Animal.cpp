/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:41:27 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:41:28 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "\033[33mAnimal default constructor called\033[0m" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout << "\033[33mAnimal parametric constructor called for " << type << "\033[0m" << std::endl;
}

Animal::~Animal() {
	std::cout << "\033[33mAnimal destructor called for " << type << "\033[0m" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "\033[33mAnimal copy constructor called\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "\033[33mAnimal assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "\033[33m* Generic animal sound *\033[0m" << std::endl;
}

std::string Animal::getType() const {
	return type;
}