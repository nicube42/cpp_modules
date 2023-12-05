/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:02:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 13:38:02 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int	main(int ac, char **av)
{
	Rpn rpn;

	if (ac > 2)
	{
		std::cout << "Please enter only one calcul" << std::endl;
		return (0);
	}
	else if (ac == 1)
	{
		rpn.run("8 9 * 9 - 9 - 9 - 4 - 1 +");
		rpn.run("7 7 * 7 -");
		rpn.run("1 2 * 2 / 2 * 2 4 - +");
		rpn.run("(1 + 1)");
	}
	else
		rpn.run(av[1]);
	return (0);
}