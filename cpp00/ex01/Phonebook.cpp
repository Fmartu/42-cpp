/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:02:39 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/13 15:02:39 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>

Phonebook::Phonebook()
{

}
Phonebook::~Phonebook()
{

}

void Phonebook::add()
{
	std::string tmp;
	static int i;

	tmp == "";

	if (i < 8)
	{
		contacts[i].new_contact();
		i++;
	}
	if (i == 8)
	{
		i = 0;
		std::cout << "\033[1;31mDeleting oldest contact\033[0m" << std::endl;
	}
}

static std::string ft_format(std::string str)
{
	if(str.size() <= 10)
	{
		return(std::string(10 - str.size(), ' ') + str);
	}
	else
	{
		return(str.substr(0, 9) + ".");
	}
}
void Phonebook::search()
{
	std::string tmp;
	int i = 0;
	std::cout << "┏━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┓" << std::endl;
	std::cout << "┃     Index|First Name| Last Name| Nick Name┃" << std::endl;
	std::cout << "┣━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━┫" << std::endl;
	while(i < 8)
	{
		std::cout << "┃         " << i << "|" << ft_format(contacts[i].get_name()) << "|"<< ft_format(contacts[i].get_lastname());
		std::cout << "|" << ft_format(contacts[i].get_nickname()) << "┃" << std::endl;
		i++;
	}
	std::cout << "┗━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┛" << std::endl;
	std::cout << "\033[1;32mPress the desired contact ID to show more info\033[0m" << std::endl;
	while(1)
	{
		std::getline(std::cin, tmp);
		if((tmp[0] <= '7' && tmp[0] >= '0') && tmp.size() == 1 && (contacts[tmp[0] - '0'].get_name().size() != 0))
		{
			std::cout << "\033[1;32mName:\033[0m" << contacts[tmp[0] - '0'].get_name() << std::endl;
			std::cout << "\033[1;32mLast Name:\033[0m" << contacts[tmp[0] - '0'].get_lastname() << std::endl;
			std::cout << "\033[1;32mNickname:\033[0m" << contacts[tmp[0] - '0'].get_nickname() << std::endl;
			std::cout << "\033[1;32mPhone Number:\033[0m" << contacts[tmp[0] - '0'].get_phonenumber() << std::endl;
			std::cout << "\033[1;32mDarkest Secret:\033[0m" << contacts[tmp[0] - '0'].get_darkestsecret() << std::endl;
			break;
		}
		else
		{
			std::cout << "\033[1;31mError: going back to main menu\033[0m" << std::endl;
			break;
		}
	}
}
