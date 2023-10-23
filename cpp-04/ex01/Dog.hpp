/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 12:12:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
        std::string _type;
        Brain		*_brain;

	public:
        Dog(void);
        Dog(const Dog &dog);

        ~Dog(void);

        Dog  &operator= (const Dog &dog);

        void                makeSound(void) const;
        const std::string   getType( void ) const;
		const Brain			*getBrain(void) const;
		void				printIdeas(void) const;

};

#endif
