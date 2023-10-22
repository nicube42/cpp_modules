/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:06:44 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/22 17:41:09 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);

        ScavTrap &operator= (const ScavTrap &scavtrap);
        
        ~ScavTrap(void);

        int			getHitPoints(void);
        int			getAttackDamage(void);
		int			getEnergyPoints(void);
		std::string	getName(void);

        void    guardGate(void);
};

#endif
