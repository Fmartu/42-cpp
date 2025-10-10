/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:30:42 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 18:30:42 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>     // For std::string
#include <cstdlib>    // For EXIT_FAILURE and std::stof

// Comprehensive test program for Fixed class with all operators
// Takes two command-line arguments and tests all comparison and arithmetic operations
int	main(int argc, char **argv)
{
	// Check if user provided exactly two arguments
	if (argc < 3)
	{
		std::cout << "Usage:\n\tArg1: first operand\n\tArg2: second operand";
		return (EXIT_FAILURE);
	}
	// Convert command-line arguments to strings for easier handling
	std::string	arg1 = argv[1];
	std::string	arg2 = argv[2];

	// Create Fixed objects from float values (using std::stof to convert string to float)
	Fixed		num1(std::stof(arg1));  // First operand
	Fixed		num2(std::stof(arg2));  // Second operand
	// Test all comparison operators
	// Greater than test
	if (num1 > num2)
		std::cout << num1 << " > " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " > " << num2 << " is false" << std::endl;

	// Less than test
	if (num1 < num2)
		std::cout << num1 << " < " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " < " << num2 << " is false" << std::endl;

	// Greater than or equal test
	if (num1 >= num2)
		std::cout << num1 << " >= " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " >= " << num2 << " is false" << std::endl;

	// Less than or equal test
	if (num1 <= num2)
		std::cout << num1 << " <= " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " <= " << num2 << " is false" << std::endl;

	// Equality test
	if (num1 == num2)
		std::cout << num1 << " == " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " == " << num2 << " is false" << std::endl;

	// Inequality test
	if (num1 != num2)
		std::cout << num1 << " != " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " != " << num2 << " is false" << std::endl;

	// Test arithmetic operators
	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << std::endl;  // Addition
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << std::endl;  // Subtraction
	std::cout << num1 << " * " << num2 << " is " << num1 * num2 << std::endl;  // Multiplication
	std::cout << num1 << " / " << num2 << " is " << num1 / num2 << std::endl;  // Division
	
	// Test increment and decrement operators
	std::cout << "num1++ is " << num1++ << std::endl;          // Post-increment (returns old value)
	std::cout << "num1 is " << num1 << std::endl;              // Show new value after post-increment
	std::cout << "num1-- is " << num1-- << std::endl;          // Post-decrement (returns old value)
	std::cout << "num1 is " << num1 << std::endl;              // Show new value after post-decrement
	std::cout << "++" << num1 << " is " << ++num1 << std::endl;  // Pre-increment (returns new value)
	std::cout << "--" << num1 << " is " << --num1 << std::endl;  // Pre-decrement (returns new value)
	return (0);
}
