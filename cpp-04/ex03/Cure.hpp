/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:40:39 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:10:00 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class	Cure : public AMateria
{
	private:
        std::string _type;
        
	public:
        Cure(void);
        Cure(const Cure &cure);

        ~Cure(void);

        Cure &operator= (const Cure &cure);

        std::string const &getType() const;

        virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};

#endif
