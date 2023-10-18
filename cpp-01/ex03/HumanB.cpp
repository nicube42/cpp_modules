/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:27:20 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 14:05:59 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
