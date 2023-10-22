/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:19:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:50:15 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
    : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "(null)";
	this->ClapTrap::_name = this->_name + "_clap_name";
    this->_hit_points = this->FragTrap::getHitPoints();
    this->_energy_points = this->ScavTrap::getEnergyPoints();
    this->_attack_damage = this->FragTrap::getAttackDamage();
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) 
    : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
    this->_hit_points = this->FragTrap::getHitPoints();
    this->_energy_points = this->ScavTrap::getEnergyPoints();
    this->_attack_damage = this->FragTrap::getAttackDamage();
	std::cout << "DiamondTrap  constructor called with name " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
	:	ClapTrap(diamondtrap),
		ScavTrap(diamondtrap),
    	FragTrap(diamondtrap)
{
    this->_name = diamondtrap._name;
	this->ClapTrap::_name = this->_name + "_clap_name";
    this->_hit_points = diamondtrap._hit_points;
    this->_energy_points = diamondtrap._energy_points;
    this->_attack_damage = diamondtrap._attack_damage;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &diamondtrap)
{
    if (this != &diamondtrap)
    {
        this->_name = diamondtrap._name;
        this->_hit_points = diamondtrap._hit_points;
        this->_energy_points = diamondtrap._energy_points;
        this->_attack_damage = diamondtrap._attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my claptrap name is "
		<< this->ClapTrap::_name << std::endl;
}
