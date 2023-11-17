/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:58 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 11:06:05 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << GREEN << "First test : valid bureaucrat" << RESET << std::endl;
		Bureaucrat	bureaucrat("George", 2);

		std::cout << bureaucrat << std::endl;

		bureaucrat.decrement_grade();
		bureaucrat.increment_grade();
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

	try
	{	
		std::cout << RED << "Second test : instanciate with grade too high" << RESET << std::endl;

		Bureaucrat	bureaucrat2("Jean", 160);
		
		std::cout << bureaucrat2 << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << RED << "Third test : instanciate with grade too low" << RESET << std::endl;

		Bureaucrat	bureaucrat3("Jacques", 0);

		std::cout << bureaucrat3 << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << RED << "Fourth test : increase grade when at maximum" << RESET << std::endl;

		Bureaucrat	bureaucrat4("Paul", 1);

		std::cout << bureaucrat4 << std::endl;
		bureaucrat4.increment_grade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	try
	{
		std::cout << RED << "Fifth test : decrease grade when at minimum" << RESET << std::endl;

		Bureaucrat	bureaucrat5("Frank", 150);

		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.decrement_grade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	return (0);
}
