/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:40:32 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/14 00:40:32 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

 #include <string>
 #include <iostream>

 class Zombie
 {
	private:
	std::string name;
	std::string colorZombie() const;

	public:
	Zombie(std::string name);
	~Zombie();
	void announce();
	void randomChump( std::string name);
 };
