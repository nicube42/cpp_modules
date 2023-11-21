/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:22:45 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 14:41:10 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	const int	intArray[5] = {1, 2, 3, 4, 5};
	const std::string	strArray[5] = {"42", "c", "salut", "bonjour", "ededw d"};
	const float	floatArray[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
	iter<int>(intArray, 4, ::print_array);
	std::cout << std::endl;
	iter<std::string>(strArray, 4, ::print_array);
	std::cout << std::endl;
	iter<float>(floatArray, 4, ::print_array);
	return (0);
}
