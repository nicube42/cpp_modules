/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:25 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:49:57 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "A dog has been created with a default constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
    std::cout << "Copy constructor called for Dog class" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "A destructor has been called for dog class" << std::endl;
}

Dog &Dog::operator= (const Dog &dog)
{
    if (this != &dog)
        this->_type = dog._type;
    return (*this);
}


void    Dog::makeSound(void) const
{
    std::cout << "Ouaf ouaf ouaf grrrrr ouaf" << std::endl;
}

const std::string Dog::getType( void ) const
{
    return (this->_type);
}
