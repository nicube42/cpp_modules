/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:55:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:19:35 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:
        std::string _type;

	public:
        Animal(void);
        Animal(const Animal &animal);

        virtual ~Animal(void);

        Animal  &operator= (const Animal &animal);

        virtual void                makeSound(void) const;
        virtual const std::string   getType(void) const;

};

#endif
