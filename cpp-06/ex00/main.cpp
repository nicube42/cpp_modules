/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:35:31 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 15:56:03 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "converting 9" << RESET << std::endl;
		ScalarConverter::convert("9");
		std::cout << RED << "converting -10.5" << RESET << std::endl;
		ScalarConverter::convert("-10.5");
		std::cout << RED << "converting 'a'" << RESET << std::endl;
		ScalarConverter::convert("'a'");
		std::cout << RED << "converting -inf" << RESET << std::endl;
		ScalarConverter::convert("-inf");
		std::cout << RED << "converting +inf" << RESET << std::endl;
		ScalarConverter::convert("+inf");
		std::cout << RED << "converting nan" << RESET << std::endl;
		ScalarConverter::convert("nan");
	}
	else
	{
		std::cout << RED << "converting " << av[1] << RESET << std::endl;
		ScalarConverter::convert(av[1]);
	}
	return (0);
}
