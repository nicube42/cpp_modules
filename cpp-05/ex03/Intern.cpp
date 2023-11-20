/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:41:26 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 11:59:07 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm*	createShrubberyForm(const std::string& target)
{
	return new ShrubberyCreationForm(target);
}

AForm*	createRobotomyForm(const std::string& target)
{
	return new RobotomyRequestForm(target);
}

AForm*	createPresidentialForm(const std::string& target)
{
	return new PresidentialPardonForm(target);
}

Intern::Intern(void)
{
	_formEntries[0].name = "shrubbery creation";
	_formEntries[0].creator = &createShrubberyForm;


	_formEntries[1].name = "robotomy request";
	_formEntries[1].creator = &createRobotomyForm;


	_formEntries[2].name = "presidential pardon";
	_formEntries[2].creator = &createPresidentialForm;
}

Intern::Intern(const Intern &intern)
{
	(void) intern;	
}

Intern::~Intern(void)
{
}

Intern  &Intern::operator= (const Intern &intern)
{
	if (this != &intern)
		for (int i = 0; i < 3; i++)
			this->_formEntries[i] = intern._formEntries[i];
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (_formEntries[i].name == name)
		{
			std::cout << "Intern creates " << _formEntries[i].name << std::endl;
			return _formEntries[i].creator(target);
		}
	}
	throw (WrongtypeException());
	return NULL;
}
