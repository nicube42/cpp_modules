/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:03:30 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/23 16:52:18 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
        AMateria            *(_inventory[4]);
        std::string const   _name;
        
	public:
        Character(void);
        Character(const std::string name);
        Character(const Character &character);

        ~Character(void);

        Character &operator= (const Character &character);

        std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
