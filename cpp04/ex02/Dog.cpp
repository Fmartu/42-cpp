/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:45:20 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:45:21 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34mDog constructor called\033[0m" << std::endl;
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "\033[34mDog destructor called\033[0m" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "\033[34mDog copy constructor called\033[0m" << std::endl;
	brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "\033[34mDog assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "\033[34mWoof! Woof! 🐕\033[0m" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}