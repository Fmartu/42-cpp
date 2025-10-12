/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:20:59 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/10 00:21:00 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	std::cout << "\033[1;37m=== 🤖 Time to fight da family 🤖 ===\033[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;33m⚡ Creating \033[0m" << std::endl;
	{
		ClapTrap basic("Clap");
		ScavTrap advanced("Scav");
		FragTrap destroyer("Frag");
		std::cout << std::endl;

		std::cout << "\033[1;33m⚔️  Attack \033[0m" << std::endl;
		basic.attack("Dummy");
		advanced.attack("Bigger dummy");
		destroyer.attack("Boss Enemy");
		advanced.ClapTrap::attack("Dummy from before");

		std::cout << "\n\033[1;33m💥 Damage and repairs \033[0m" << std::endl;
		basic.takeDamage(5);
		advanced.takeDamage(30);
		destroyer.takeDamage(50);
		basic.beRepaired(3);
		advanced.beRepaired(10);
		destroyer.beRepaired(15);
		std::cout << std::endl;

		std::cout << "\033[1;33m⚙️  Special abilities:\033[0m" << std::endl;
		advanced.guardGate();
		destroyer.highFivesGuys();
		std::cout << std::endl;

		std::cout << "\033[1;33m📋 Copying\033[0m" << std::endl;
		ScavTrap copy(advanced);
		FragTrap fragCopy(destroyer);
		ScavTrap assigned("Mimic");
		assigned = advanced;
		std::cout << std::endl;

		std::cout << "\033[1;37m💀 Die \033[0m" << std::endl;
	}

	std::cout << "\033[1;33m🚨 Missed \033[0m" << std::endl;
	ClapTrap tester("Validator");
	tester.attack("");
	std::cout << std::endl;

	std::cout << "\n   \033[1;32m✅ They all died!\033[0m\n " << std::endl;

	return 0;
}
