/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:14:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 19:29:44 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("(null)")
{
    std::cout << "Character created with default name" << std::endl;
    for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(const std::string name) : _name(name)
{
    std::cout << name << " has been created" << std::endl;
    for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = 0;
	}
}

Character::Character(const Character &character) : _name(character._name)
{
    for(int i = 0; i < 4; i++)
	{
		if ((character._inventory)[i])
			(this->_inventory)[i] = (character._inventory[i])->clone();
	}
    std::cout << this->_name << " has been copied" << std::endl;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
    std::cout << this->_name << " destroyed" << std::endl;
}

Character &Character::operator= (const Character &character)
{
    for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (character._inventory[i])
			this->_inventory[i] = (character._inventory[i])->clone();
	}
    return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    int i = 0;
    while (i < 4 && (this->_inventory)[i])
        i++;
    this->_inventory[i] = m;
    std::cout << this->_name << " equiped " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        std::cout << this->_name << " unequiped " << (this->_inventory)[idx]->getType() << std::endl;
        if ((this->_inventory)[idx])
        {
            delete (this->_inventory)[idx];
            this->_inventory[idx] = 0;
        }
        else
            std::cout << "Nothing at this slot" <<std::endl;
    }
    else
        std::cout << "Chose a slot between 0 and 3" << std::endl;
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        std::cout << this->_name << " attacked " << target.getName() << " using "
            << ((this->_inventory)[idx])->getType() << " materia" << std::endl;
        (this->_inventory)[idx]->use(target);
    }
}
