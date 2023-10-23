/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:55:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 14:09:22 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal
{
	protected:
        std::string _type;
		AAnimal(void);
        AAnimal(const AAnimal &animal);

        AAnimal  &operator= (const AAnimal &animal);

	public:
        virtual 					~AAnimal(void);

        virtual void                makeSound(void) const;
        virtual const std::string   getType(void) const;
		virtual	void                printIdeas(void) const; 

};

#endif
