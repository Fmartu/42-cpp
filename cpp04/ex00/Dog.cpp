/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:40:17 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:40:19 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34mDog constructor called\033[0m" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[34mDog destructor called\033[0m" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "\033[34mDog copy constructor called\033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[34mDog assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "\033[34mWoof! Woof! 🐕\033[0m" << std::endl;
}