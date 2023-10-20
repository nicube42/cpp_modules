/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:07:32 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 14:59:10 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ct("Nico");

    ct.attack("Ivo");
    ct.takeDamage(3);
    ct.beRepaired(5);
    ct.takeDamage(20);
}
