/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:54:50 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 15:54:52 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    ct("Nico", 10, 10, 0);
    ScavTrap    st("Ivo");

    ct.attack("Ivo");
    st.attack("Nico");
    ct.takeDamage(3);
    st.takeDamage(3);
    ct.beRepaired(5);
    st.guardGate();
    st.beRepaired(5);
    ct.takeDamage(130);
    st.takeDamage(130);
}
