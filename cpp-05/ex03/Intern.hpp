/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:41:35 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 11:58:12 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

# include <iostream>
# include <string>
# include <fstream>
#include <cstdlib>
#include <ctime>

# include "AForm.hpp"

class	AForm;

class	Intern
{
	private:

		struct FormEntry
		{
			std::string	name;
			AForm *(*creator)(const std::string&);
		};
		static const int _num_forms = 3;
		FormEntry _formEntries[_num_forms];

	public:

	class WrongtypeException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return "wrong type";
		}
	};
		
		Intern(void);
		Intern(const Intern &intern);

		~Intern(void);

		Intern  &operator= (const Intern &intern);
		
		// AForm* createShrubberyForm(const std::string& target);
		// AForm* createRobotomyForm(const std::string& target);
		// AForm* createPresidentialForm(const std::string& target);

		
		AForm	*makeForm(std::string name, std::string target);
};

#endif
