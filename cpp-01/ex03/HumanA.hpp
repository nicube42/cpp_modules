/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:11:06 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 14:02:49 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
