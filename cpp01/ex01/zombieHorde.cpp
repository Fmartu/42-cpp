/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:28:36 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/14 00:28:36 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return 0;
	Zombie* horde = reinterpret_cast<Zombie*>(operator new[](sizeof(Zombie) * N));
	for (int i = 0; i < N; ++i)
	{
		new(&horde[i]) Zombie(name);
	}
	return horde;
}
