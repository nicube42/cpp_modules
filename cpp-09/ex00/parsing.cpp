/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:53:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 17:56:57 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year)
{
	switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return isLeapYear(year) ? 29 : 28;
		default:
			return 0;
	}
}

int checkIfDateValid(const std::string& line)
{
	// if (line.length() != 10)
	// 	return 0;
	if (!std::isdigit(line[0]) || !std::isdigit(line[1]) || !std::isdigit(line[2]) || !std::isdigit(line[3]) || line[4] != '-' ||
		!std::isdigit(line[5]) || !std::isdigit(line[6]) || line[7] != '-' || 
		!std::isdigit(line[8]) || !std::isdigit(line[9]))
			return 0;

	int year = std::stoi(line.substr(0, 4));
	int month = std::stoi(line.substr(5, 2));
	int day = std::stoi(line.substr(8, 2));

	if (month < 1 || month > 12)
		return 0;
	if (day < 1 || day > getDaysInMonth(month, year))
		return 0;

	return 1;
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
