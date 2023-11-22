/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:22:45 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 10:14:57 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const int	intArray[5] = {1, 2, 3, 4, 5};
	const std::string	strArray[5] = {"42", "c", "salut", "bonjour", "ededw d"};
	const float	floatArray[5] = {1.1, 1.2, 1.3, 1.4, 1.5};

	std::cout << GREEN << "Use function print array on int array" << RESET << std::endl;
	iter<int>(intArray, 5, ::print_array);
	std::cout << std::endl;
	std::cout << GREEN << "Use function print array on std::string array" << RESET << std::endl;
	iter<std::string>(strArray, 5, ::print_array);
	std::cout << std::endl;
	std::cout << GREEN << "Use function print array on float array" << RESET << std::endl;
	iter<float>(floatArray, 5, ::print_array);
	std::cout << std::endl;
	return (0);
}
