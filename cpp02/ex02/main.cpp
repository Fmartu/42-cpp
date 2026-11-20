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
#include <string>
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Usage:\n\tArg1: first operand\n\tArg2: second operand";
		return (EXIT_FAILURE);
	}
	std::string	arg1 = argv[1];
	std::string	arg2 = argv[2];

	Fixed		num1(static_cast<float>(std::atof(arg1.c_str())));
	Fixed		num2(static_cast<float>(std::atof(arg2.c_str())));
	if (num1 > num2)
		std::cout << num1 << " > " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " > " << num2 << " is false" << std::endl;

	if (num1 < num2)
		std::cout << num1 << " < " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " < " << num2 << " is false" << std::endl;

	if (num1 >= num2)
		std::cout << num1 << " >= " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " >= " << num2 << " is false" << std::endl;

	if (num1 <= num2)
		std::cout << num1 << " <= " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " <= " << num2 << " is false" << std::endl;

	if (num1 == num2)
		std::cout << num1 << " == " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " == " << num2 << " is false" << std::endl;

	if (num1 != num2)
		std::cout << num1 << " != " << num2 << " is true" << std::endl;
	else
		std::cout << num1 << " != " << num2 << " is false" << std::endl;

	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << std::endl;
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << std::endl;
	std::cout << num1 << " * " << num2 << " is " << num1 * num2 << std::endl;
	std::cout << num1 << " / " << num2 << " is " << num1 / num2 << std::endl;
	
	std::cout << "num1++ is " << num1++ << std::endl;
	std::cout << "num1 is " << num1 << std::endl;
	std::cout << "num1-- is " << num1-- << std::endl;
	std::cout << "num1 is " << num1 << std::endl;
	std::cout << "++" << num1 << " is " << ++num1 << std::endl;
	std::cout << "--" << num1 << " is " << --num1 << std::endl;
	return (0);
}
