/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:02:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/24 15:29:06 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rpn.hpp"

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	Rpn rpn;

	rpn.run(av[1]);
	return (0);
}
