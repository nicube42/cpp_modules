/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 12:20:28 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << GREEN << "First test : valid bureaucrat sign valid form with enough rights" << RESET << std::endl;

		Bureaucrat	bureaucrat("George", 2);
		Form		form("contract", 75, 20);

		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.signForm(form);

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
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{	
		std::cout << RED << "Second test : instanciate form with invalid sign grade" << RESET << std::endl;

		Form	form2("contract", 0, 20);
		
		std::cout << form2 << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << RED << "Third test : instanciate with invalid execute grade" << RESET << std::endl;

		Form	form3("contract", 1, 170);

		std::cout << form3 << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << RED << "Fourth test : valid bureaucrat sign valid form with grade too low" << RESET << std::endl;

		Bureaucrat	bureaucrat4("Paul", 150);
		std::cout << bureaucrat4 << std::endl;

		Form	form("secret", 1, 1);
		std::cout << form << std::endl;
		
		bureaucrat4.signForm(form);
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
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << GREEN << "Fifth test : valid bureaucrat sign valid form already signed" << RESET << std::endl;

		Bureaucrat	bureaucrat5("Frank", 1);
		std::cout << bureaucrat5 << std::endl;

		Form form("form", 1, 1);
		bureaucrat5.signForm(form);
		bureaucrat5.signForm(form);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	return (0);
}
