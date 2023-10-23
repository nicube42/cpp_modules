/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:59:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 14:09:45 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) : _type("(null)")
{
    std::cout << "An animal has been created with a default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) : _type(animal._type)
{
    std::cout << "Copy constructor called for Animal class" << std::endl;
}

AAnimal  &AAnimal::operator= (const AAnimal &animal)
{
    if (this != &animal)
        this->_type = animal._type;
    return (*this);
}

AAnimal::~AAnimal(void)
{
    std::cout << "A destructor has been called for animal class" << std::endl;
}

void    AAnimal::makeSound(void) const
{
    std::cout << "*Basic animal sound*" << std::endl;
}

const std::string AAnimal::getType(void) const
{
    return (this->_type);
}

void    AAnimal::printIdeas(void) const
{
}
