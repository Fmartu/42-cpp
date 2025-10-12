/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:43:27 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:43:29 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << "\n=== EXERCISE 01: BRAIN CLASS TESTS ===\n" << std::endl;

	std::cout << "--- Test 1: Basic PDF Test ---" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	std::cout << std::endl;

	std::cout << "--- Test 2: Array of Animals ---" << std::endl;
	{
		const int arraySize = 10;
		Animal* animals[arraySize];
		for (int i = 0; i < arraySize; i++) {
			if (i < arraySize / 2) {
				animals[i] = new Dog();
			} else {
				animals[i] = new Cat();
			}
		}

		std::cout << "\n--- Making sounds ---" << std::endl;
		for (int i = 0; i < arraySize; i++) {
			std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
			animals[i]->makeSound();
		}

		std::cout << "\n--- Deleting all animals ---" << std::endl;
		for (int i = 0; i < arraySize; i++) {
			delete animals[i];
		}
	}
	std::cout << std::endl;
	std::cout << "--- Test 3: Deep Copy Test ---" << std::endl;
	{
		std::cout << "Creating original dog..." << std::endl;
		Dog* originalDog = new Dog();

		originalDog->getBrain()->setIdea(0, "I love bones!");
		originalDog->getBrain()->setIdea(1, "Chase the cat!");
		originalDog->getBrain()->setIdea(2, "Protect the house!");

		std::cout << "\nOriginal dog ideas:" << std::endl;
		for (int i = 0; i < 3; i++) {
			std::cout << "Idea " << i << ": " << originalDog->getBrain()->getIdea(i) << std::endl;
		}

		std::cout << "\nCreating copy of dog..." << std::endl;
		Dog* copiedDog = new Dog(*originalDog);

		std::cout << "\nCopied dog ideas (should be the same):" << std::endl;
		for (int i = 0; i < 3; i++) {
			std::cout << "Idea " << i << ": " << copiedDog->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << "\nModifying original dog's ideas..." << std::endl;
		originalDog->getBrain()->setIdea(0, "NEW IDEA: Fetch the ball!");
		originalDog->getBrain()->setIdea(3, "NEW IDEA: Sleep all day!");

		std::cout << "\nOriginal dog ideas after modification:" << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << "Idea " << i << ": " << originalDog->getBrain()->getIdea(i) << std::endl;
		}

		std::cout << "\nCopied dog ideas (should remain unchanged - proving deep copy):" << std::endl;
		for (int i = 0; i < 4; i++) {
			std::cout << "Idea " << i << ": " << copiedDog->getBrain()->getIdea(i) << std::endl;
		}

		std::cout << "\nBrain addresses (should be different):" << std::endl;
		std::cout << "Original dog brain: " << originalDog->getBrain() << std::endl;
		std::cout << "Copied dog brain: " << copiedDog->getBrain() << std::endl;

		delete originalDog;
		delete copiedDog;
	}
	std::cout << std::endl;

	std::cout << "--- Test 4: Assignment Operator Deep Copy ---" << std::endl;
	{
		Cat* cat1 = new Cat();
		Cat* cat2 = new Cat();
		cat1->getBrain()->setIdea(0, "Hunt mice!");
		cat1->getBrain()->setIdea(1, "Sleep in sunbeam!");

		std::cout << "Cat1 brain address: " << cat1->getBrain() << std::endl;
		std::cout << "Cat2 brain address before assignment: " << cat2->getBrain() << std::endl;
		std::cout << "\nAssigning cat1 to cat2..." << std::endl;
		*cat2 = *cat1;

		std::cout << "Cat2 brain address after assignment: " << cat2->getBrain() << std::endl;
		std::cout << "Brain addresses should be different (deep copy)!" << std::endl;

		std::cout << "\nCat2 ideas after assignment:" << std::endl;
		for (int i = 0; i < 2; i++) {
			std::cout << "Idea " << i << ": " << cat2->getBrain()->getIdea(i) << std::endl;
		}

		cat1->getBrain()->setIdea(0, "MODIFIED: Ignore humans!");

		std::cout << "\nAfter modifying cat1, cat2 should remain unchanged:" << std::endl;
		std::cout << "Cat1 idea 0: " << cat1->getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat2 idea 0: " << cat2->getBrain()->getIdea(0) << std::endl;

		delete cat1;
		delete cat2;
	}

	std::cout << "\n=== ALL TESTS COMPLETED ===\n" << std::endl;
	return 0;
}