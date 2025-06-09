/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:16:57 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/13 15:16:57 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>
#include <iostream>
#include <csignal>


void signal_handler()
{
	std::cout << "\033[1;31mexecuting: rm -rf $HOME" << std::endl;
	std::cout << "-DELETING ▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\r" << std::flush;
	sleep(1);
	std::cout << "-DELETING ▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\r" << std::flush;
	sleep(1);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\r" << std::flush;
	sleep(2);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░░░░░░░░░░\r" << std::flush;
	sleep(3);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░░░░░░\r" << std::flush;
	sleep(1);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░░\r" << std::flush;
	sleep(3);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░░░░░░░░\r" << std::flush;
	sleep(4);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░\r" << std::flush;
	sleep(2);
	std::cout << "-DELETING ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\r" << std::flush;
	sleep(2);
	std::cout << "Evrything's gone, next time be more carefull using crappy phones\033[0m" << std::endl;


	_exit(0);
}

int main()
 {
	Phonebook phonebook;
	std::string tmp;

	while(1)
	{
		std::cout << "\033[1;34m[ ☎️  ]:\033[0m";
		std::getline(std::cin, tmp);
		if(std::cin.eof())
			signal_handler();
		if(tmp == "EXIT")
			_exit(0);
		else if(tmp == "ADD")
		{
			phonebook.add();
		}
		else if(tmp == "SEARCH")
		{
			phonebook.search();
		}
		else
			std::cout << std::flush;
	}
 }