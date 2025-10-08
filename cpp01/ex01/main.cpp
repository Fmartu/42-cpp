/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:28:52 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/14 00:28:52 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int N = 4;
    Zombie* horde = zombieHorde(N, "Lhorde");
    if (N <= 0)
    {
        std::cout << "No Zombie created" << std::endl;
    }
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }
    for (int i = 0; i < N; ++i) {
        horde[i].~Zombie();
    }
    operator delete[](horde);
    return 0;
}
