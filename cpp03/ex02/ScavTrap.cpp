/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:21:11 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 14:09:47 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << getColor() << "ScavTrap " << _name << " is constructed!\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << getColor() << "ScavTrap " << _name << " is destroyed!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << getColor() << "ScavTrap " << _name << " is copy constructed!\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << getColor() << "ScavTrap " << _name << " is assigned from " << other.getColor() << other._name << getColor() << "!\033[0m" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "ScavTrap " << _name << " can't attack because it has no hit points left!\033[0m" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << getColor() << "ScavTrap " << _name << " can't attack because it has no energy points left!\033[0m" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << getColor() << "ScavTrap " << _name << " fiercely attacks " << target
			  << ", dealing " << _attackDamage << " points of devastating damage!\033[0m" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "ScavTrap " << _name << " can't guard the gate because it's destroyed!\033[0m" << std::endl;
		return;
	}
	std::cout << getColor() << "🛡️  ScavTrap " << _name << " is now in Gate keeper mode! 🛡️\033[0m" << std::endl;
}