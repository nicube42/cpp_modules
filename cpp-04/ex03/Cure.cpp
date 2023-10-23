/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:40:28 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:57:14 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : _type("cure")
{
    std::cout << "Cure materia has been created" << std::endl;
}

Cure::Cure(const Cure &cure) : _type(cure._type)
{
    std::cout << "Cure materia has been copied" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure materia has been destroyed" << std::endl;
}

Cure &Cure::operator= (const Cure &cure)
{
    if (this != &cure)
    {
        this->_type = cure._type;
    }
    return (*this);
}

std::string const &Cure::getType(void) const
{
    return (this->_type);
}

Cure*    Cure::clone()const
{
    Cure *newCure = new Cure;
    return (newCure);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* Heals " << target.getName() << " wound's *" << std::endl;
}
