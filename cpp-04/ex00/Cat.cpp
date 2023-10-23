/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:05:49 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:40:37 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "A cat has been created with a default constructor" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
    std::cout << "Copy constructor called for Cat class" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "A destructor has been called for cat class" << std::endl;
}

Cat &Cat::operator= (const Cat &cat)
{
    if (this != &cat)
        this->_type = cat._type;
    return (*this);
}


void    Cat::makeSound(void) const
{
    std::cout << "Miaou miaou miaou miaou MIAAAAAAAAOUUUUUUUUUUU" << std::endl;
}

const std::string Cat::getType( void ) const
{
    return (this->_type);
}
