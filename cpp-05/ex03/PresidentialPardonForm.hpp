/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:46:01 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:47:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;

		PresidentialPardonForm(void);

	public:
	
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm(void);

		void	execute(Bureaucrat const &executor);

		friend std::ostream &operator<<(std::ostream& os, const AForm &AForm);

};

#endif
