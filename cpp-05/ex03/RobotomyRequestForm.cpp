/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:18 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:13 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Shrubbery", 72, 45), _target("null")
{
	
}
		
RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	(void) executor;
	if (this->get_status() == true)
	{
		if (executor.get_grade() <= this->get_grade_execute())
		{
			srand(time(NULL));

			int random_number = rand() % 100;
			if (random_number % 2 == 0)
				std::cout << this->_target << " has been robotomized, rip" << std::endl;
			else
				std::cout << "The robotomy failed" << std::endl;
		}
		else
			throw (GradeTooLowException());
	}
	else
		throw (NotSigned());
}
