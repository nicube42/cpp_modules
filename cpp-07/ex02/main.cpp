/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:45:05 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 12:50:24 by ndiamant         ###   ########.fr       */
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


/*----------- Main of subject  -----------*/

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
