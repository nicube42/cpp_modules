/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:22:22 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/06 16:33:04 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nick;
		std::string	_phone_num;
		std::string	_secret;
	public:
		Contact(void);
		~Contact(void);
        std::string	get_fname(void) const;
		std::string	get_lname(void) const;
		std::string	get_nick(void) const;
		std::string	get_phone_num(void) const;
		std::string	get_secret(void) const;
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_phone_num(std::string str);
		void		set_secret(std::string str);
};

#endif
