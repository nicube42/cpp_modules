/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:56:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 16:08:43 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragtrap);

        FragTrap &operator= (const FragTrap &fragtrap);
        
        ~FragTrap(void);
        
        void    highFiveseGuys(void);
};

#endif
