/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:44:54 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:44:55 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const std::string& type);
	virtual ~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	virtual void makeSound() const = 0;
	std::string getType() const;
};

#endif