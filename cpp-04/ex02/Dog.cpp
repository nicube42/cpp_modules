/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:25 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 13:55:33 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "A dog has been created with a default constructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    this->_type = dog.getType();
    this->_brain = new Brain(*(dog.getBrain()));
    std::cout << "Copy constructor called for Dog class" << std::endl;
}

Dog::~Dog(void)
{
    delete this->_brain;
    std::cout << "A destructor has been called for dog class" << std::endl;
}

Dog &Dog::operator= (const Dog &dog)
{
    if (this != &dog)
    {
        this->_type = dog._type;
        if (this->_brain)
            this->_brain = new Brain(*(dog.getBrain()));
    }
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

const Brain *Dog::getBrain(void) const
{
    return (this->_brain);
}

void    Dog::printIdeas(void) const
{
    std::cout << this->_brain->get1Ideas() << std::endl;
    std::cout << "The address of the first idea is: ";
    this->_brain->printAddress();
}

