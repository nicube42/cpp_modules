/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:54:19 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:14:33 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHRUBBERYCREATIONFORM_HPP

# define SCHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;

		ShrubberyCreationForm(void);

	public:
	
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const &executor);

		friend std::ostream &operator<<(std::ostream& os, const AForm &AForm);

};

#endif
