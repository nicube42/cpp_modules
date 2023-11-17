/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:12 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 13:12:06 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :	_name("(null)"),
						_signed(false),
						_grade_required_sign(75),
						_grade_required_execute(75)
{
	
}

AForm::AForm(std::string name, int grade_sign, int grade_execute) :	_name(name),
																	_signed(false),
																	_grade_required_sign(grade_sign),
																	_grade_required_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw(GradeTooHighException());
	else if (grade_sign > 150 || grade_execute > 150)
		throw(GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
	os << "Name: " << AForm.get_name() << ", status: " << AForm.get_status()
		<< ", grade to sign: " << AForm.get_grade_sign() << ", grade to execute: "
		<< AForm.get_grade_execute();
	return (os);
}

const std::string	AForm::get_name(void) const
{
	return (this->_name);
}

bool	AForm::get_status(void) const
{
	return (this->_signed);
}

int	AForm::get_grade_sign(void) const
{
	return (this->_grade_required_sign);
}

int	AForm::get_grade_execute(void) const
{
	return (this->_grade_required_execute);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() <= this->_grade_required_sign)
		this->_signed = true;
	else
		throw (GradeTooLowException());
}
