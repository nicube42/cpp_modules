/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:32:45 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:47:39 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : _type("ice")
{
    std::cout << "Ice materia has been created" << std::endl;
}

Ice::Ice(const Ice &ice) : _type(ice._type)
{
    std::cout << "Ice materia has been copied" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Ice materia has been destroyed" << std::endl;
}

Ice &Ice::operator= (const Ice &ice)
{
    if (this != &ice)
    {
        this->_type = ice._type;
    }
    return (*this);
}

std::string const &Ice::getType(void) const
{
    return (this->_type);
}

Ice*    Ice::clone()const
{
    Ice *newIce = new Ice;
    return (newIce);
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
