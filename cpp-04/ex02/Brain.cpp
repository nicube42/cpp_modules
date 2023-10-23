/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:45:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 13:53:49 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    this->_ideas = new std::string[100];
    for (int i = 0; i <= 100; i++)
        this->_ideas[i] = "I want to eat";
    std::cout << "A new brain has been created with 100 ideas" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    this->_ideas = new std::string[100];
    for (int i = 0; i <= 100; i++)
        this->_ideas[i] = brain._ideas[i] + "_copied";
    std::cout << "A copy constructor has been called for brain" << std::endl;
}

Brain::~Brain(void)
{
    delete [] this->_ideas;
    std::cout << "A destructor has been called for brain" << std::endl;
}

Brain  &Brain::operator= (const Brain &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i <= 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return (*this);

}

const std::string Brain::get1Ideas(void)
{
    return (this->_ideas[0]);
}

void Brain::printAddress(void)
{
    std::string *ref = &this->_ideas[0];
    std::cout << ref << std::endl;
}
