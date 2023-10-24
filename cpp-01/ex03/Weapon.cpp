/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:07:41 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/24 10:56:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("(null)")
{
}

Weapon::Weapon(std::string str) : _type(str)
{
}

Weapon::~Weapon(void)
{
	
}

std::string	Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}
