/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:17:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 19:38:09 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "Materia source created" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(MateriaSource const &materiasource)
{
    std::cout << "Materia source deep copied" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materiasource._inventory[i])
            this->_inventory[i] = materiasource._inventory[i]->clone();
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
    std::cout << "Materia source destroyed" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const & ref)
{
    for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (ref._inventory[i])
			this->_inventory[i] = (ref._inventory[i])->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_inventory[i])
        {
            this->_inventory[i] = m;
            std::cout << "Materia of type " << m->getType() << " stored in materia source" 
                << std::endl;
            return ;
        }
    }
    std::cout << "No space left" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i]->getType() == type)
        {
            std::cout << "Materia of type " << type << " created by materia source"
                << std::endl;
            return (this->_inventory[i]->clone());
        }
    }
    std::cout << "No materia of this type stored" << std::endl;
    return (NULL);
}
