/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:33:40 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/11 18:21:12 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zos = zombieHorde(5, "Max");;
	int		i = 0;

	while (i < 5)
	{
		zos[i].announce();
		i++;
	}
	delete [] zos;
}
