/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:35:09 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:36:17 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	protected:
        std::string _type;

	public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wronganimal);

        virtual ~WrongAnimal(void);

        WrongAnimal  &operator= (const WrongAnimal &wronganimal);

        virtual void                makeSound(void) const;
        virtual const std::string   getType(void) const;

};

#endif
