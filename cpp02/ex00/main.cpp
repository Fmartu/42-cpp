/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:39:55 by fmartusc          #+#    #+#             */
/*   Updated: 2025/08/21 17:39:55 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	// Default constructor called
	Fixed a;

	// Copy constructor called
	//Copy assignment operator called
	Fixed b( a );

	// Default constructor called
	Fixed c;

	// Copy assignment operator called
	//getRawBits member function called
	c = b;
	
	//getRawBits member function three times
	//0 three times
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}

/*
Expected output:

Default constructor called
Copy constructor called
Copy assignment operator called
Default constructor called
Copy assignment operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
*/