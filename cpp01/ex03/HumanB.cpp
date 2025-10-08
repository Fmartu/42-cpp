/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:13:20 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/20 12:13:20 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	_name = name;
	std::cout << "\033[1;35m" <<  "HumanB " << name << " created with no weapon" << "\033[0m" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "\033[1;35m" << "HumanB " << _name << " destroyed" << "\033[0m" << std::endl;
}

void	HumanB::attack(void)
{

	std::cout << "\033[1;35m" << _name << " attacks with his " << _weapon->getType() << "\033[0m" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}