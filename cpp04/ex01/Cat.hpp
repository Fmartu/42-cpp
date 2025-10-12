/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:42:20 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:42:21 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;

public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);

	void makeSound() const;
	Brain* getBrain() const;
};

#endif