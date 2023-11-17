/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:12 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 12:17:32 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :	_name("(null)"),
					_signed(false),
					_grade_required_sign(75),
					_grade_required_execute(75)
{
	
}

Form::Form(std::string name, int grade_sign, int grade_execute) :	_name(name),
																	_signed(false),
																	_grade_required_sign(grade_sign),
																	_grade_required_execute(grade_execute)
{
	if (grade_sign < 1 || grade_execute < 1)
		throw(GradeTooHighException());
	else if (grade_sign > 150 || grade_execute > 150)
		throw(GradeTooLowException());
}

Form::~Form(void)
{
	
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name: " << form.get_name() << ", status: " << form.get_status()
		<< ", grade to sign: " << form.get_grade_sign() << ", grade to execute: "
		<< form.get_grade_execute();
	return (os);
}

const std::string	Form::get_name(void) const
{
	return (this->_name);
}

bool	Form::get_status(void) const
{
	return (this->_signed);
}

int	Form::get_grade_sign(void) const
{
	return (this->_grade_required_sign);
}

int	Form::get_grade_execute(void) const
{
	return (this->_grade_required_execute);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.get_grade() <= this->_grade_required_sign)
		this->_signed = true;
	else
		throw (GradeTooLowException());
}
