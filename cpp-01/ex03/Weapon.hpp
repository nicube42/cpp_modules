/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:02:49 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 13:57:16 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string str);
		~Weapon(void);
		std::string	getType(void) const;
		void		setType(std::string str);
};

#endif
