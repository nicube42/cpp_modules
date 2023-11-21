/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:45:07 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 10:31:43 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base base;
	Base *ret;
	ret = base.generate();

	/*-----------------------------------------------------------------------------------*/
	
	std::cout << std::endl << GREEN << "Trying to indentify base" << RESET << std::endl;
	try
	{
		base.identify(&base);
	}
	catch(const Base::WrongClassException& e)
	{
		std::cerr << RED << "error catched: " << e.what() << RESET << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/
	
	std::cout << std::endl << GREEN << "Trying to indentify random generated class pointer"
		<< RESET << std::endl;
	try
	{
		base.identify(ret);
	}
	catch(const Base::WrongClassException& e)
	{
		std::cerr << RED << "error catched: " << e.what() << RESET << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/

	std::cout << std::endl << GREEN << "Trying to indentify base reference"
		<< RESET << std::endl;
	try
	{
		base.identify(base);
	}
	catch(const Base::WrongClassException& e)
	{
		std::cerr << RED << "error catched: " << e.what() << RESET << std::endl << std::endl;
	}

	/*-----------------------------------------------------------------------------------*/

	std::cout << std::endl << GREEN << "Trying to indentify random generated class reference"
		<< RESET << std::endl;
	try
	{
		base.identify(*ret);
	}
	catch(const Base::WrongClassException& e)
	{
		std::cerr << RED << "error catched: " << e.what() << RESET << std::endl << std::endl;
	}
	
	std::cout << std::endl;
	delete (ret);
}
