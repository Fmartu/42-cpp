/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:13:14 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/20 12:13:14 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "\033[1;32m" << "HumanA " << name << " created with " << weapon.getType() << "\033[0m" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "\033[1;32m" << "HumanA " << _name << " destroyed" << "\033[0m" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "\033[1;32m" <<  _name << " attacks with his " << _weapon.getType() << "\033[0m" << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}
