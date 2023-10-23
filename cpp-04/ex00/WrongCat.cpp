/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:21:56 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:39:48 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "A wrong cat has been created with a default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
    *this = wrongcat;
    std::cout << "Copy construcor called for wrong Cat class" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "A destructor has been called for wrong cat class" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &wrongcat)
{
    if (this != &wrongcat)
        this->_type = wrongcat._type;
    return (*this);
}


void    WrongCat::makeSound(void) const
{
    std::cout << "Ouaf ouaf I guess" << std::endl;
}

const std::string WrongCat::getType( void ) const
{
    return (this->_type);
}
