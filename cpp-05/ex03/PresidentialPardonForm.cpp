/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:45:32 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:05 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential", 25, 5), _target("null")
{
	
}
		
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	(void) executor;
	if (this->get_status() == true)
	{
		if (executor.get_grade() <= this->get_grade_execute())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		else
			throw (GradeTooLowException());
	}
	else
		throw (NotSigned());
}
