/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:54:39 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 16:16:20 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    ct("Nico", 10, 10, 0);
    ScavTrap    st("Ivo");
    FragTrap    ft("Jeremy");

    ct.attack("Ivo");
    st.attack("Nico");
    ft.attack("Ivo");
    ct.takeDamage(3);
    st.takeDamage(3);
    ft.takeDamage(3);
    ct.beRepaired(5);
    st.guardGate();
    ft.highFiveseGuys();
    st.beRepaired(5);
    ft.beRepaired(5);
    ct.takeDamage(130);
    st.takeDamage(130);
    ft.takeDamage(130);
}
