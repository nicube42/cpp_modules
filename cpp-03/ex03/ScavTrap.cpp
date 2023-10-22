/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:06:53 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:42:54 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("(null)", 100, 50, 20)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor called with name " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : ClapTrap(scavtrap._name,
                                                        scavtrap._hit_points,
                                                        scavtrap._energy_points,
                                                        scavtrap._attack_damage)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &scavtrap)
{
    if (this != &scavtrap)
    {
        this->setHitPoints(scavtrap._hit_points);
        this->setEnergyPoints(scavtrap._energy_points);
        this->setAttackDamage(scavtrap._attack_damage);
        this->setName(scavtrap._name);
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in guard mode" << std::endl;
}

int ScavTrap::getHitPoints(void)
{
    return (100);
}

int ScavTrap::getAttackDamage(void)
{
    return (20);
}

int ScavTrap::getEnergyPoints(void)
{
    return (50);
}

std::string ScavTrap::getName(void)
{
    return (this->_name);
}
