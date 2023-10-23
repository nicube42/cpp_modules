/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:14:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 17:11:24 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("(null)")
{
    std::cout << "Character created with default name" << std::endl;
}

Character::Character(const std::string name) : _name(name)
{
    std::cout << name << " has been created" << std::endl;
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
    for (int i = 0; i < 4; i++)
    {
        if (!(this->_inventory)[i])
            (this->_inventory)[i] = m;
    }
    std::cout << this->_name << " equiped " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        std::cout << this->_name << " unequiped " << (this->_inventory)[idx]->getType() << std::endl;
        delete (this->_inventory)[idx];
    }
}

void    Character::use(int idx, ICharacter& target)
{
    for (int i = 0; i < 4; i++)
    {
        if (idx == i)
        {
            std::cout << this->_name << " attacked " << target.getName() << " using "
                << ((this->_inventory)[i])->getType() << " materia" << std::endl;
            (this->_inventory)[i]->use(target);
        }
    }
}
