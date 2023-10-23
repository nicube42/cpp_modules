/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:59:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:40:45 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("(null)")
{
    std::cout << "An animal has been created with a default constructor" << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type)
{
    std::cout << "Copy constructor called for Animal class" << std::endl;
}

Animal  &Animal::operator= (const Animal &animal)
{
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "A destructor has been called for animal class" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "*Basic animal sound*" << std::endl;
}

const std::string Animal::getType(void) const
{
    return (this->_type);
}
