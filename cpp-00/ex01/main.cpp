/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:53:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/06 17:40:58 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main(void)
{
    Phonebook   ph;
	std::string user_select;

	while (user_select != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, user_select);
		if (user_select == "ADD")
			ph.add();
		else if (user_select == "SEARCH")
			ph.search();
        std::cout << std::endl;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
}
