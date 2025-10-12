/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:42:03 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:42:05 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\033[36mBrain constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = "";
	}
}

Brain::~Brain() {
	std::cout << "\033[36mBrain destructor called\033[0m" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "\033[36mBrain copy constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "\033[36mBrain assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < 100) {
		ideas[index] = idea;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return ideas[index];
	}
	return "";
}