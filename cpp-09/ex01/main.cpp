/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:02:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 16:51:38 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int	main(int ac, char **av)
{
	Rpn rpn;

	if (ac > 2)
	{
		std::cout << "Please enter a calculation of the type <\"7 7 * 7 -\">" << std::endl;
		return (0);
	}
	else if (ac == 1)
	{
		rpn.run("8 9 * 9 - 9 - 9 - 4 - 1 +");
		rpn.run("7 7 * 7 -");
		rpn.run("1 2 * 2 / 2 * 2 4 - +");
		rpn.run("(1 + 1)");
		rpn.run("1 2 * 2 / 2 + 5 * 6 - 1 3 * - 4 5 * * 8 /");
		rpn.run("9 8 * 4 * 4 / 2 + 9 - 8 - 8 - 1 - 6 -");
	}
	else
		rpn.run(av[1]);
	return (0);
}
