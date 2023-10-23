/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:27:01 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("(null)")
{
    std::cout << "AMateria created with default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria created with type " << type << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : _type(amateria._type)
{
    std::cout << "AMateria created with copy constructor" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destroyed" << std::endl;
}

AMateria &AMateria::operator= (const AMateria &amateria)
{
    if (this != &amateria)
    {
        this->_type = amateria._type;
    }
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}
