/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:20:48 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 14:07:57 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << getColor() << "FragTrap " << _name << " is assembled and ready to rock!\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << getColor() << "FragTrap " << _name << " has been disassembled!\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << getColor() << "FragTrap " << _name << " is copy assembled!\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << getColor() << "FragTrap " << _name << " is reassigned from " << other.getColor() << other._name << getColor() << "!\033[0m" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "FragTrap " << _name << " can't high-five because it's destroyed!\033[0m" << std::endl;
		return;
	}
	std::cout << getColor() << "🙌 FragTrap " << _name << " requests positive high-fives from everyone! Up top! 🙌\033[0m" << std::endl;
}