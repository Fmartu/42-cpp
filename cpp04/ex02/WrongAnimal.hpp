/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:46:19 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:46:20 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	~WrongAnimal(); // NOT virtual - questo è il problema!
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

	void makeSound() const; // NOT virtual - questo è il problema!
	std::string getType() const;
};

#endif