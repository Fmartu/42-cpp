/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:12:11 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/14 00:12:11 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << colorZombie() << "Zombie " << name << " created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << colorZombie() << "Zombie " << name << " destroyed." << "\033[0m" << std::endl;
}

void Zombie::announce()
{
	std::cout << colorZombie() << name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

	std::string Zombie::colorZombie() const
	{
		if (name == "Heap")
			return "\033[32m";
		else if (name == "Stack")
			return "\033[34m";
		return "\033[0m";
	}