/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:54:39 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:50:04 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
   // ClapTrap    ct("Nico", 10, 10, 0);
    //ScavTrap    st("Ivo");
    //FragTrap    ft("Jeremy");
    DiamondTrap dt("Yolo");

    // ct.attack("Ivo");
    // st.attack("Nico");
    // ft.attack("Ivo");
    // ct.takeDamage(3);
    // st.takeDamage(3);
    // ft.takeDamage(3);
    // ct.beRepaired(5);
    // st.guardGate();
    // ft.highFiveseGuys();
    // st.beRepaired(5);
    // ft.beRepaired(5);
    // ct.takeDamage(130);
    // st.takeDamage(130);
    // ft.takeDamage(130);
    dt.attack("Nico");
    dt.takeDamage(3);
    dt.beRepaired(4);
    dt.whoAmI();
}
