/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:13:37 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/13 15:13:37 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

Contact::Contact()
{

}
Contact::~Contact()
{

}

void Contact::new_contact()
{
	std::string tmp2;

	std::cout << "\033[1;32mEnter name: \033[0m" ;
		std::getline(std::cin, tmp2);
		name = tmp2;
		if(tmp2.size() == 0)
			name += "   NO INFO";
		if (!std::cin.eof())
		std::cout << "\033[1;32mEnter last name: \033[0m" ;
		std::getline(std::cin, tmp2);
		last_name = tmp2;
		if(tmp2.size() == 0)
			last_name += "   NO INFO";
		if (!std::cin.eof())
		std::cout << "\033[1;32mEnter nickname: \033[0m" ;
		std::getline(std::cin, tmp2);
		nickname = tmp2;
		if(tmp2.size() == 0)
			nickname += "   NO INFO";
		if (!std::cin.eof())
		std::cout << "\033[1;32mEnter phone number: \033[0m" ;
		std::getline(std::cin, tmp2);
		phone_number = tmp2;
		if(tmp2.size() == 0)
			phone_number += "   NO INFO";
		if (!std::cin.eof())
		std::cout << "\033[1;32mEnter darkest secret: \033[0m" ;
		std::getline(std::cin, tmp2);
		darkest_secret = tmp2;
		if(tmp2.size() == 0)
			darkest_secret += "   NO INFO";
		if (!std::cin.eof())
		std::cout << "\033[1;32mNew contact created\033[0m" << std::endl;
}

std::string Contact::get_name()
{
	return(name);
}

std::string Contact::get_lastname()
{
	return(last_name);
}

std::string Contact::get_nickname()
{
	return(nickname);
}
std::string Contact::get_phonenumber()
{
	return(phone_number);
}
std::string Contact::get_darkestsecret()
{
	return(darkest_secret);
}
