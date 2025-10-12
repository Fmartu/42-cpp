/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:40:55 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:40:56 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << "\033[1;37m=== 🐾 Polymorphism Demo 🐾 ===\033[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;33m✅ Correct Polymorphism:\033[0m" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;

	std::cout << "\033[1;33m❌ Wrong Polymorphism:\033[0m" << std::endl;
	{
		const WrongAnimal* wrongMeta = new WrongAnimal();
		const WrongAnimal* wrongCat = new WrongCat();

		std::cout << wrongCat->getType() << " " << std::endl;
		wrongCat->makeSound();
		wrongMeta->makeSound();

		delete wrongMeta;
		delete wrongCat;
	}

	std::cout << "\n\033[1;32m✅ Polymorphism demo completed!\033[0m" << std::endl;
	return 0;
}