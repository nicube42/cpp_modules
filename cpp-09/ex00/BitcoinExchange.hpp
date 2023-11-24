/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:27:02 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/24 11:42:53 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

# define BITCOINEXCHANGE_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE	"\033[0;34m"
#define MAG		"\033[0;35m"
#define CYN 	"\033[0;36m"

#define MAX_INT 2147483647

# include <iostream>
# include <fstream>
# include <sstream>
# include <regex>
# include <string>
# include <map>
# include <stack>
# include <iterator>
# include <stdexcept>
# include <random>


class	BitcoinExchange
{
	private:

	std::map<std::string, float>	_database;

	public:

		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &btcexchange);
		BitcoinExchange		&operator= (const BitcoinExchange &btcexchange);
		~BitcoinExchange(void);

	void addRecord(const std::string& key, float value);
	void printDatabase(void) const;
	void printCorrespondingValue(const std::string& key, float value) const;
};

#endif
