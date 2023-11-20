/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:35:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 15:44:47 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

	ScalarConverter::ScalarConverter(void)
	{
	}

	ScalarConverter::~ScalarConverter(void)
	{
	}

	void ScalarConverter::convert(const std::string str)
	{
		try
		{
			std::cout << GREEN << "converting to int" << RESET << std::endl;

			int	intValue = std::stoi(str);
			std::cout << intValue << std::endl;
		}
		catch (...)
		{
			std::cerr << "error: can't convert to int" << std::endl;
		}

		try
		{
			std::cout << GREEN << "converting to float" << RESET << std::endl;

			float	floatValue = std::stof(str);
			if (std::isinf(floatValue))
			{
				if (floatValue > 0)
					std::cout << str << " is +inf" << std::endl;
				else
					std::cout << str << " is -inf" << std::endl;
			}
			else if (std::isnan(floatValue))
					std::cout << str << " is nanf" << std::endl;
			else
				std::cout << floatValue << "f" << std::endl;
		}
		catch (...)
		{
			std::cerr << "error: can't convert to float" << std::endl;
		}

		try
		{
			std::cout << GREEN << "converting to double" << RESET << std::endl;

			double	doubleValue = std::stod(str);
			if (std::isinf(doubleValue))
			{
				if (doubleValue > 0)
					std::cout << str << " is +inf" << std::endl;
				else
					std::cout << str << " is -inf" << std::endl;
			}
			else if (std::isnan(doubleValue))
					std::cout << str << " is nan" << std::endl;
			else
				std::cout << doubleValue << std::endl;
		}
		catch (...)
		{
			std::cerr << "error: can't convert to double" << std::endl;
		}

		if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		{
			std::cout << GREEN << "converting to char" << RESET << std::endl;

			std::cout << str[1] << std::endl << std::endl;
		}
		else
		{
			std::cout << GREEN << "converting to char" << RESET << std::endl;

			std::cerr << "error: can't convert to char" << std::endl << std::endl;
		}
		
	}
