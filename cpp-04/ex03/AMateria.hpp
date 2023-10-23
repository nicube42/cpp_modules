/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:26:57 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:47:55 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
        std::string _type;
        
	public:
        AMateria(std::string const &type);
        AMateria(void);
        AMateria(const AMateria &amateria);

        virtual ~AMateria(void);

        AMateria &operator= (const AMateria &amateria);

        virtual std::string const &getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};

#endif
