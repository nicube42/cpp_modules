/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:07:34 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 16:16:12 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _attack_damage;

	public:
        ClapTrap(void);
        ClapTrap(std::string name, int hp, int ep, int ad);
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap &operator= (const ClapTrap &claptrap);
        ~ClapTrap(void);

        std::string getName(void);
        int         getHitPoints(void);
        int         getEnergyPoints(void);
        int         getAttackDamage(void);
        void        setHitPoints(int hp);
		void		setEnergyPoints(int ep);
        void        setAttackDamage(int ad);
		void		setName(std::string name);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
