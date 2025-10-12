/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:45:04 by fmartusc          #+#    #+#             */
/*   Updated: 2025/10/12 17:45:05 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;
};

#endif