/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:55:52 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:43:24 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("(null)", 100, 100, 30)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap constructor called with name " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap._name,
                                                        fragtrap._hit_points,
                                                        fragtrap._energy_points,
                                                        fragtrap._attack_damage)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &fragtrap)
{
    if (this != &fragtrap)
    {
        this->setHitPoints(fragtrap._hit_points);
        this->setEnergyPoints(fragtrap._energy_points);
        this->setAttackDamage(fragtrap._attack_damage);
        this->setName(fragtrap._name);
    }
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::highFiveseGuys(void)
{
    std::string str;

    std::cout << this->_name << " request an highfive ! (press enter to high five)" << std::endl;
    std::getline(std::cin, str);
}

int FragTrap::getHitPoints(void)
{
    return (100);
}

int FragTrap::getAttackDamage(void)
{
    return (30);
}

int FragTrap::getEnergyPoints(void)
{
    return (100);
}

std::string FragTrap::getName(void)
{
    return (this->_name);
}
