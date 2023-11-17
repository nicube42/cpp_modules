/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 16:15:41 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		std::cout << GREEN << "First test : valid bureaucrat sign and " <<
			"execute a valid shrubbery creation form" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 2);
		AForm	*form = new ShrubberyCreationForm("test.txt");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;

		bureaucrat.signForm(*form);

		bureaucrat.executeForm(*form);

		delete (form);
		
		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << RED << "Second test : valid bureaucrat sign a valid shrubbery creation " <<
			"form without needed grade to execute" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 150);
		AForm	*form = new ShrubberyCreationForm("test.txt");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;

		bureaucrat.signForm(*form);
		
		bureaucrat.executeForm(*form);

		delete (form);

		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << GREEN << "Third test : valid bureaucrat sign a valid robotomy " <<
		"creation form and execute it" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 1);
		AForm	*form = new RobotomyRequestForm("Nicolas");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;

		bureaucrat.signForm(*form);
		
		bureaucrat.executeForm(*form);

		delete (form);

		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << RED << "Fourth test : valid bureaucrat execute a Robotomy " <<
		"creation form not signed" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 1);
		AForm	*form = new RobotomyRequestForm("Nicolas");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;
		
		bureaucrat.executeForm(*form);

		delete (form);

		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << GREEN << "Fifth test : valid bureaucrat sign a Presidential pardon " <<
		"creation form and execute it" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 1);
		AForm	*form = new PresidentialPardonForm("Alfred");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;
		
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);

		delete (form);

		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/

	try
	{
		std::cout << RED << "Sixth test : valid bureaucrat sign and execute a Presidential pardon " <<
		"creation form without the grade needed to execute it" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 7);
		AForm	*form = new PresidentialPardonForm("Alfred");

		std::cout << bureaucrat << std::endl;
		std::cout << *form << std::endl;
		
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);

		delete (form);

		std::cout << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	return (0);
}
