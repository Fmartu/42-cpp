/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:13:34 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/20 12:13:34 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	private:
	std::string	_type;
	public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string&	getType(void);
	void		setType(std::string type);
};