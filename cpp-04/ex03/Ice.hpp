/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:30:55 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:10:02 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"


class	Ice : public AMateria
{
	private:
        std::string _type;
        
	public:
        Ice(void);
        Ice(const Ice &ice);

        ~Ice(void);

        Ice &operator= (const Ice &ice);

        std::string const &getType() const;

        virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};

#endif
