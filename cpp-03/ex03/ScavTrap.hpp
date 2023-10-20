/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:06:44 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 15:59:47 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavtrap);

        ScavTrap &operator= (const ScavTrap &scavtrap);
        
        ~ScavTrap(void);

        void    guardGate(void);
};

#endif
