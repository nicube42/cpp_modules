/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:07:05 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/06 17:36:45 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook_utils.hpp"

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

int    print_tab(Contact contacts[8])
{
    char        c = '0';
    std::string str;
    int         i = 0;
    
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    while (++c <= '8')
    {
        if (contacts[c - 1 - '0'].get_fname().size() && ++i)
        {
            str = c;
            str = fix_width(str, 10);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = fix_width(contacts[c - 1  - '0'].get_fname(), 10);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = fix_width(contacts[c - 1 - '0'].get_lname(), 10);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = fix_width(contacts[c - 1 - '0'].get_nick(), 10);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            std::cout << "|" << std::endl;
        }
    }
    std::cout << " ------------------------------------------- " << std::endl;
    return (i);
}
