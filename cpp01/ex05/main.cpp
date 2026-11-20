/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:09:46 by fmartusc          #+#    #+#             */
/*   Updated: 2025/07/21 17:09:46 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>

int main()
{
	Harl Karen;

	Karen.complain("INFO");
	std::cout << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("ERROR");

	std::cout << std::endl;
	Karen.complain("hello_world");
}
