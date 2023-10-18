/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:09:02 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 16:23:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	compare_av(char 	**av)
{
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str[i] == av[1])
			return (i);
	}
	return (-1);
}

int	select_level(char **av, Harl & harl)
{
	switch(compare_av(av))
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
		{
			std::cout << "Error" << std::endl;
			return (-1);
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Wrong input. Input DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (-1);
	}
	return (select_level(av, harl));
}
