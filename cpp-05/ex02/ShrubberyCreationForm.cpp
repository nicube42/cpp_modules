/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:54:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:44:58 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery", 145, 137), _target("null")
{
	
}
		
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->get_status() == true)
	{
		if (executor.get_grade() <= this->get_grade_execute())
		{
			std::string tree_art = 
			"        ccee88oo\n"
			"  C8O8O8Q8PoOb o8oo\n"
			" dOB69QO8PdUOpugoO9bD\n"
			"CgggbU8OU qOp qOdoUOdcb\n"
			"    6OuU  /p u gcoUodpP\n"
			"      \\\\\\//  /douUP\n"
			"        \\\\\\////\n"
			"         |||/\\\\\n"
			"         |||\\\\/\n"
			"         |||||\n"
			"   .....//||||\\\\....\n";

			std::ofstream fileStream(this->_target);

			if (fileStream.is_open())
			{
				fileStream << tree_art << std::endl;
				fileStream.close();
				std::cout << "Tree written to file successfully." << std::endl;
			}
			else
				std::cerr << "Failed to open the file." << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (NotSigned());
}

