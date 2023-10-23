/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:49:52 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# pragma once

class	Dog : public Animal
{
	private:
        std::string _type;

	public:
        Dog(void);
        Dog(const Dog &dog);

        ~Dog(void);

        Dog  &operator= (const Dog &dog);

        void                makeSound(void) const;
        const std::string   getType( void ) const;

};

#endif
