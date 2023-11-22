/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:12:00 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 15:00:18 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	std::cout << RED << "Searching 2 in a vector container containing 1 2 and 3"
		<< RESET << std::endl;
	try
	{
		easyfind(vec, 2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	
	std::cout << std::endl;

	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	std::cout << RED << "Searching 4 in a list container containing 1-5"
		<< RESET << std::endl;
	try
	{
		easyfind(list, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	std::cout << std::endl;

	std::deque<int> deque;
	deque.push_back(7);
	deque.push_back(8);
	deque.push_back(9);
	deque.push_back(10);
	deque.push_back(11);
	std::cout << RED << "Searching 4 in a deque container containing 7-11"
		<< RESET << std::endl;
	try
	{
		easyfind(deque, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << "error: " << RESET << e.what() << '\n';
	}
}
