/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:27:05 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/24 15:00:26 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::ifstream file("data.csv");
	std::string line;
	if (!file.is_open())
	{
		std::cerr << "Unable to open file\n";
	}
	else
	{
		std::getline(file, line);
		while (getline(file, line))
		{
			std::istringstream iss(line);
			std::string date;
			std::string rateStr;
			float rate;

			if (std::getline(iss, date, ',') && std::getline(iss, rateStr))
			{
				rate = std::stof(rateStr);
				addRecord(date, rate);
			}
		}
		file.close();
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &btcexchange) : _database(btcexchange._database)
{
}

BitcoinExchange		&BitcoinExchange::operator= (const BitcoinExchange &btcexchange)
{
	if (this != &btcexchange)
	{
		_database = btcexchange._database;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	
}

void BitcoinExchange::addRecord(const std::string& key, float value)
{
	_database[key] = value;
}

void BitcoinExchange::printDatabase(void) const
{
	for (std::map<std::string, float>::const_iterator it = _database.begin(); it != _database.end(); ++it)
			std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
}

void BitcoinExchange::printCorrespondingValue(const std::string &key, float value) const
{
	std::map<std::string, float>::const_iterator it = _database.lower_bound(key);
	if (it == _database.end())
	{
		if (!_database.empty())
		{
			--it;
			std::cout << CYN << "Closest previous key: " << RESET << it->first << ", " << MAG << "Bitcoin value in USD: " << RESET << it->second * value << std::endl;
		} 
		else
			std::cout << "Database is empty." << std::endl;
	} 
	else if (it != _database.begin() && it->first != key)
	{
		--it;
		std::cout << CYN << "Closest previous key: " << RESET << it->first << ", " << MAG << "Bitcoin value in USD: " << RESET << it->second * value << std::endl;
	}
	else
		std::cout << CYN << "Key: " << RESET << key << ", " << MAG << "Bitcoin value in USD: " << RESET << it->second * value << std::endl;
}
