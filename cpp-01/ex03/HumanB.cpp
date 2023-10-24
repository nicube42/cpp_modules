/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:27:20 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/24 11:03:44 by ndiamant         ###   ########.fr       */
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
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon and can't attack" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
