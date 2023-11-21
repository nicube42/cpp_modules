/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:35:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 12:05:23 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void)
{
}

enum LiteralType { Char, Int, Float, Double, Invalid };

LiteralType checkLiteralType(const std::string& literal)
{
	if (literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'')
		return Char;
	if (std::regex_match(literal, std::regex("[+-]?[0-9]+")))
		return Int;
	if (std::regex_match(literal, std::regex("[+-]?([0-9]*[.])?[0-9]+(f)?")) ||
		literal == "nanf" || literal == "+inff" || literal == "-inff")
		return Float;
	if (std::regex_match(literal, std::regex("[+-]?([0-9]*[.])?[0-9]+")) ||
		literal == "nan" || literal == "+inf" || literal == "-inf")
		return Double;
		
	return Invalid;
}

void ScalarConverter::convert(const std::string str)
{
	if (checkLiteralType(str) == Int)
	{
		std::cout << GREEN << "Base type is a int" << RESET << "\n";
		int intValue = std::stoi(str);
		char charValue = static_cast<char>(intValue);
		float floatValue = static_cast<float>(intValue);
		double doubleValue = static_cast<double>(intValue);
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "char: Impossible" << "\n";
		else if (charValue < 32 || charValue > 126)
			std::cout << "char: Non displayable" << "\n";
		else
			std::cout << "char: " << charValue << "\n";
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "int: Impossible" << "\n";
		else
			std::cout << "int: " << intValue << "\n";
		if (floatValue == std::floor(floatValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "float: " << floatValue << ".0f\n";
		else if (str == "-inf" || str == "+inf")
			std::cout << "float: " << floatValue << "\n";
		else
			std::cout << "float: " << floatValue << "f\n";
		if (doubleValue == std::floor(doubleValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "double: " << doubleValue << ".0\n\n";
		else
			std::cout << "double: " << doubleValue << "\n\n";
	}
	else if (checkLiteralType(str) == Float)
	{
		std::cout << GREEN << "Base type is a float" << RESET << "\n";
		float floatValue = std::stof(str);
		char charValue = static_cast<char>(floatValue);
		int intValue = static_cast<int>(floatValue);
		double doubleValue = static_cast<double>(floatValue);
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "char: Impossible" << "\n";
		else if (charValue < 32 || charValue > 126)
			std::cout << "char: Non displayable" << "\n";
		else
			std::cout << "char: " << charValue << "\n";
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "int: Impossible" << "\n";
		else
			std::cout << "int: " << intValue << "\n";
		if (floatValue == std::floor(floatValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "float: " << floatValue << ".0f\n";
		else if (str == "-inf" || str == "+inf")
			std::cout << "float: " << floatValue << "\n";
		else
			std::cout << "float: " << floatValue << "f\n";
		if (doubleValue == std::floor(doubleValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "double: " << doubleValue << ".0\n\n";
		else
			std::cout << "double: " << doubleValue << "\n\n";
	}
	else if (checkLiteralType(str) == Double)
	{
		std::cout << GREEN << "Base type is a double" << RESET << "\n";
		double doubleValue = std::stod(str);
		char charValue = static_cast<char>(doubleValue);
		float intValue = static_cast<int>(doubleValue);
		float floatValue = static_cast<float>(doubleValue);
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "char: Impossible" << "\n";
		else if (charValue < 32 || charValue > 126)
			std::cout << "char: Non displayable" << "\n";
		else
			std::cout << "char: " << charValue << "\n";
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "int: Impossible" << "\n";
		else
			std::cout << "int: " << intValue << "\n";
		if (floatValue == std::floor(floatValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "float: " << floatValue << ".0f\n";
		else if (str == "-inf" || str == "+inf")
			std::cout << "float: " << floatValue << "\n";
		else
			std::cout << "float: " << floatValue << "f\n";
		if (doubleValue == std::floor(doubleValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "double: " << doubleValue << ".0\n\n";
		else
			std::cout << "double: " << doubleValue << "\n\n";
	}
	else if (checkLiteralType(str) == Char)
	{
		std::cout << GREEN << "Base type is a char" << RESET << "\n";
		char charValue = str[1];
		double doubleValue = static_cast<double>(charValue);
		float intValue = static_cast<int>(charValue);
		double floatValue = static_cast<float>(charValue);
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "char: Impossible" << "\n";
		else if (charValue < 32 || charValue > 126)
			std::cout << "char: Non displayable" << "\n";
		else
			std::cout << "char: " << charValue << "\n";
		if (str == "nan" || str == "-inf" || str == "+inf")
			std::cout << "int: Impossible" << "\n";
		else
			std::cout << "int: " << intValue << "\n";
		if (floatValue == std::floor(floatValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "float: " << floatValue << ".0f\n";
		else if (str == "-inf" || str == "+inf")
			std::cout << "float: " << floatValue << "\n";
		else
			std::cout << "float: " << floatValue << "f\n";
		if (doubleValue == std::floor(doubleValue) && str != "nan" && str != "-inf" && str != "+inf")
			std::cout << "double: " << doubleValue << ".0\n\n";
		else
			std::cout << "double: " << doubleValue << "\n\n";
	}
	else
		std::cerr << "error: invalid type" << std::endl << std::endl;
}
