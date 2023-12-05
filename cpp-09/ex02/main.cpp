/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:45:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 15:41:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Please enter a list of number" << std::endl;
		return (1);
	}
	else
	{
		int	*arr = new int[ac - 1];
		try
		{
			for (int i = 0; av[i + 1]; i++)
				arr[i] = std::stoi(av[i + 1]);
		}
		catch (std::exception &e)
		{
			std::cout << RED << "Please enter only numbers" << RESET << std::endl;
			return (1);
		}
		PmergeMe pmergeme(arr, ac - 1);
		pmergeme.displayBeforeSort();
		pmergeme.sortDeque();
		pmergeme.sortVector();
		pmergeme.displayAfterSort();
		pmergeme.displayDuration();
	}
}
