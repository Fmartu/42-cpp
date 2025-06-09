/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartusc <fmartusc@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:04:36 by fmartusc          #+#    #+#             */
/*   Updated: 2025/05/13 15:04:36 by fmartusc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #pragma once

 #include <string>
 #include <iostream>

class Contact
{
	private:
	std::string name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	public:
	Contact(); //costruttore
	~Contact(); //distruttore
	void new_contact();
	std::string get_name();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phonenumber();
	std::string get_darkestsecret();

};
