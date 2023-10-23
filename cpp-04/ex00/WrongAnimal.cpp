/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:17:39 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:40:28 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("(null)")
{
    std::cout << "A wrong animal has been created with a default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) : _type(wronganimal._type)
{
    std::cout << "Copy constructor called for wrong Animal class" << std::endl;
}

WrongAnimal  &WrongAnimal::operator= (const WrongAnimal &wronganimal)
{
    if (this != &wronganimal)
        this->_type = wronganimal._type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "A destructor has been called for wrong animal class" << std::endl;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*Basic wrong animal sound*" << std::endl;
}

const std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}
