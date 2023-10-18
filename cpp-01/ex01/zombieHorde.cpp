/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:59:13 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/11 18:17:51 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		i = 0;
	Zombie	*zos = new Zombie[N];

	while (i < N)
	{
		zos[i].set_name(name);
		i++;
	}
	return (zos);
}
