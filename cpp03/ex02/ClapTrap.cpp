/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:20:36 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 14:07:21 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::string ClapTrap::getColor() const
{
	int hash = 0;
	for (size_t i = 0; i < _name.length(); i++)
	{
		hash += _name[i];
	}

	std::string colors[] =
	{
		"\033[91m",
		"\033[92m",
		"\033[93m",
		"\033[94m",
		"\033[95m",
		"\033[96m"
	};

	return colors[hash % 6];
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
std::cout << getColor() << "ClapTrap " << _name << " is constructed!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage)
	: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << getColor() << "ClapTrap " << _name << " is constructed with custom stats!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << getColor() << "ClapTrap " << _name << " is destroyed!\033[0m" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& other)
	: _name(other._name), _hitPoints(other._hitPoints),
	  _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << getColor() << "ClapTrap " << _name << " is copy constructed!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << getColor() << "ClapTrap " << _name << " is assigned from " << other.getColor() << other._name << getColor() << "!\033[0m" << std::endl;
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << getColor() << "ClapTrap " << _name << " can't attack an empty target!\033[0m" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "ClapTrap " << _name << " can't attack because it has no hit points left!\033[0m" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << getColor() << "ClapTrap " << _name << " can't attack because it has no energy points left!\033[0m" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << getColor() << "ClapTrap " << _name << " attacks " << target
			  << ", causing " << _attackDamage << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "ClapTrap " << _name << " is already destroyed and can't take more damage!\033[0m" << std::endl;
		return;
	}

	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << getColor() << "ClapTrap " << _name << " takes " << amount
				  << " points of damage and is destroyed!\033[0m" << std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << getColor() << "ClapTrap " << _name << " takes " << amount
				  << " points of damage! Hit points remaining: " << _hitPoints << "\033[0m" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << getColor() << "ClapTrap " << _name << " can't be repaired because it's destroyed!\033[0m" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << getColor() << "ClapTrap " << _name << " can't be repaired because it has no energy points left!\033[0m" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << getColor() << "ClapTrap " << _name << " repairs itself for " << amount
			  << " hit points! Current hit points: " << _hitPoints << "\033[0m" << std::endl;
}
