/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:19:50 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 14:00:01 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[1;37m=== 🤖 Anddddd opeeeeen 🤖 ===\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33m⚡ Creating warriors...\033[0m" << std::endl;
	ClapTrap warrior1("Oneshot");
	ClapTrap warrior2("Dwoshot");
	ClapTrap warrior3("Kumshot");
	std::cout << std::endl;

	std::cout << "\033[1;33m⚔️  Battle\033[0m" << std::endl;
	warrior1.attack("Dummy");
	warrior2.attack("Minion");
	warrior3.attack("Boss");
	std::cout << std::endl;

	std::cout << "\033[1;33m💥 Damage and repairs\033[0m" << std::endl;
	warrior1.takeDamage(4);
	warrior2.takeDamage(7);
	warrior1.beRepaired(2);
	warrior3.beRepaired(3);
	std::cout << std::endl;

	std::cout << "\033[1;33m🔋 Energy \033[0m" << std::endl;
	ClapTrap tester("Battery");
	tester.attack("Useme1");
	tester.beRepaired(1);
	tester.attack("Useme2");
	tester.beRepaired(1);
	std::cout << std::endl;

	std::cout << "\033[1;37m💀 Time to explode\033[0m" << std::endl;
	return 0;
}
