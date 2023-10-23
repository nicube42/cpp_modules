/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:05:45 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 12:03:07 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
        std::string	_type;
        Brain		*_brain;

	public:
        Cat(void);
        Cat(const Cat &cat);

        ~Cat(void);

        Cat  &operator= (const Cat &cat);

        void                makeSound(void) const;
        const std::string   getType( void ) const;
		const Brain			*getBrain(void) const;
		void				printIdeas(void) const;

};

#endif
