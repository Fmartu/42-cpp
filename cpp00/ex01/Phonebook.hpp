/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:03:19 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/13 15:03:19 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #pragma once

 #include "Contact.hpp"

class Phonebook
{
	private:
	Contact contacts[8];
	public:
	Phonebook(); //costruttore
	~Phonebook(); //distruttore
	void add();
	void search();
};
