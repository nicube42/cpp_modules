/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:20:46 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:49:53 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP

# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string _name;

	public:
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondtrap);

        ~DiamondTrap(void);

        DiamondTrap &operator= (const DiamondTrap &diamondtrap);
        
        void    attack(const std::string &target);
        void    whoAmI(void);
};

#endif
