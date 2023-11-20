/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 12:01:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		std::cout << GREEN << "First test : valid bureaucrat sign and " <<
			"execute a valid shrubbery creation form" << RESET << std::endl;

		Intern	intern;
		Bureaucrat	bureaucrat("George", 2);
		AForm	*form;

		form = intern.makeForm("shrubbery creation", "test2.txt");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;

		bureaucrat.signForm(*form);

		bureaucrat.executeForm(*form);

		delete (form);
		
		std::cout << std::endl;
	}
	catch(const Intern::WrongtypeException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << RED << "First test : valid bureaucrat sign and " <<
			"execute a valid shrubbery creation form" << RESET << std::endl;

		Intern	intern;
		Bureaucrat	bureaucrat("George", 2);
		AForm	*form;

		form = intern.makeForm("shrubbery creaion", "test2.txt");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;

		bureaucrat.signForm(*form);

		bureaucrat.executeForm(*form);

		delete (form);
		
		std::cout << std::endl;
	}
	catch(const Intern::WrongtypeException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	return (0);
}
