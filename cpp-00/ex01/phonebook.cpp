/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:11:39 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/06 17:43:10 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << \
		"Welcome to your phonebook. You can store up to 8 contacts." \
		<< std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye!" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	str;

	str = "";
	if (this->_index > 7)
		std::cout << "Warning: overwriting info about " << this->_contacts[this->_index % 8].get_fname() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_fname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter last name : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_lname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter nickname : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_nick(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter phone number : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_phone_num(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter darkest secret : ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_secret(str);
		std::cout << this->_contacts[this->_index % 8].get_fname() << " added to phonebook." << std::endl;
	}
	this->_index++;
}

void	Phonebook::search(void)
{
	int			num_entries;
	std::string	str;
	
	num_entries = print_tab(this->_contacts);
	if (num_entries == 0)
		std::cout << "No contacts in the phonebook." << std::endl;
	else
	{
		while (!std::cin.eof())
		{
			std::cout << "Enter index : ";
			if (std::getline(std::cin, str) && str != "")
			{
				if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
						this->_contacts[str[0] - 1 - '0'].get_fname().size())
					break ;
			}
			std::cout << "Invalid index!" << std::endl;
		}
		std::cout << std::endl << "First Name: " << this->_contacts[str[0] - 1 - '0'].get_fname() << std::endl;
		std::cout << "Last Name: " << this->_contacts[str[0] - 1 - '0'].get_lname() << std::endl;
		std::cout << "Nickname: " << this->_contacts[str[0] - 1 - '0'].get_nick() << std::endl;
		std::cout << "Phone Number: " << this->_contacts[str[0] - 1 - '0'].get_phone_num() << std::endl;
		std::cout << "Darkest Secret: " << this->_contacts[str[0] - 1 - '0'].get_secret() << std::endl;
	}
}
