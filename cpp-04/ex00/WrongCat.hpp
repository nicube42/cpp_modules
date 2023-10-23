/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:22:00 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 09:37:42 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:
        std::string _type;

	public:
        WrongCat(void);
        WrongCat(const WrongCat &wrongcat);

        ~WrongCat(void);

        WrongCat  &operator= (const WrongCat &wrongcat);

        void                makeSound(void) const;
        const std::string   getType( void ) const;

};

#endif
