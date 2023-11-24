/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:53:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/24 11:51:18 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	checkIfDateValid(std::string line)
{
	if (std::isdigit(line[0]) && std::isdigit(line[1]) && std::isdigit(line[2]) && std::isdigit(line[3]))
		if (line[4] == '-')
			if (std::isdigit(line[5]) && std::isdigit(line[6]) && (line[5] == '0' || line[5] == '1'))
				if (line[7] == '-')
					if (std::isdigit(line[8]) && std::isdigit(line[9])
						&& (line[8] == '0' || line[8] == '1' || line[8] == '2' || line[8] == '3'))
						return (1);
	return (0);
}

int	checkIfFormatValid(std::string line)
{
	if (line[10] == ' ' && line[11] == '|' && line[12] == ' ')
		return (1);
	return (0);
}

int checkIfValueValid(const std::string& line)
{
	std::regex intRegex("^[0-9]+$");
	std::regex floatRegex("^[0-9]+\\.?[0-9]*([eE][-+]?[0-9]+)?$");

	if (std::regex_match(line, intRegex))
		return (1);
	else if (std::regex_match(line, floatRegex))
		return (1);
	else
		return (0);
}

int	checkIfNumberTooBig(std::string line)
{
	float number = std::stof(line);

	if (number > 1000)
		return (0);
	return (1);
}

int	checkLineValid(std::string line)
{
	if (checkIfDateValid(line))
	{
		if (checkIfFormatValid(line))
		{
			std::string value = line.substr(13, line.size() - 13);
			if (checkIfValueValid(value))
				if (checkIfNumberTooBig(value))
					return (1);
		}
	}
	return (0);
}
