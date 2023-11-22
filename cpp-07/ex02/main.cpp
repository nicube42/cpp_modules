/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:45:05 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 12:04:41 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	std::cout << RED << "int: " << RESET << std::endl;
	Array<int> int_null;
	Array<int> int_3(3);
	std::cout << "Size of int array is " << int_3.size() << std::endl;
	std::cout <<std::endl;
	
	std::cout << RED << "std::string: " << RESET << std::endl;
	Array<std::string> string_null;
	Array<std::string> string_3(3);
	std::cout << "Size of std::string array is " << string_3.size() << std::endl;
	std::cout <<std::endl;

	std::cout << RED << "Check deep copy: " << RESET << std::endl;
	Array<int> original(3);
	Array<int> copy(3);
	original.set_array(1);
	copy = original;
	if (&original != &copy)
	{
		std::cout << "Original content:" << std::endl;
		original.print_array();
		std::cout << std::endl;
		std::cout << "Copy content:" << std::endl;
		copy.print_array();
		std::cout << std::endl;
		std::cout << "Adress of original: " << &original << std::endl;
		std::cout << "Adress of copy: " << &copy << std::endl;
	}
	std::cout <<std::endl;

	std::cout << RED << "Access elements with [] subscript operator: "
		<< RESET << std::endl;
	try
	{
		std::cout << "original[1] = " << original[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << "original[7] = " << original[7] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout <<std::endl;

	return (0);
}
