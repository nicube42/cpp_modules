/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:27:23 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 18:08:53 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	checkLineValid(std::string line);

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Program needs a file passed as argument" << "\n";
		return (1);
	}

	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cerr << "Unable to open file\n";
		return 1;
	}
	
	std::string line;
	BitcoinExchange btc;
	getline(file, line);
	if (line.empty() || line == "date | value")
	{
		std::cerr << "File is empty\n";
		return (1);
	}
	while (getline(file, line))
	{
		std::cout << BLUE << "input to check: " << RESET << line << "\n";
		if (checkLineValid(line))
		{
			std::cout << GREEN << "Format is valid" << RESET << "\n";
			btc.printCorrespondingValue(line.substr(0, 10), std::stof(line.substr(13, line.size() - 13)));			
		}
		else
			std::cout << RED << "Format is invalid" << RESET << "\n";
		std::cout << "\n";
	}
	
	file.close();
	return (0);
}
