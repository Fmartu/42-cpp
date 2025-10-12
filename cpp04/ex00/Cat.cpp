/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:40:01 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:40:02 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[35mCat constructor called\033[0m" << std::endl;
}

Cat::~Cat() {
	std::cout << "\033[35mCat destructor called\033[0m" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "\033[35mCat copy constructor called\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[35mCat assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "\033[35mMeow! Meow! 🐱\033[0m" << std::endl;
}