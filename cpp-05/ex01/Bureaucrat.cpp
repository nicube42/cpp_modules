/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:53 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 12:46:47 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("(null)"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw(GradeTooHighException());
	else if (grade > 150)
		throw(GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
}

Bureaucrat  &Bureaucrat::operator= (const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
		this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
}

const std::string	Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int	Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment_grade(void)
{
	this->_grade--;
	if (this->_grade - 1 < 1)
		throw(GradeTooHighException());
	else
		std::cout << "Grade incremented. New grade is " << this->_grade << std::endl;
}

void	Bureaucrat::decrement_grade(void)
{
	this->_grade++;
	if (this->_grade + 1 > 150)
		throw(GradeTooLowException());
	else
		std::cout << "Grade decremented. New grade is " << this->_grade << std::endl;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.get_status() == true)
		std::cout << "Form already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signed " << form.get_name() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << this->_name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
		}
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.get_name() << ", bureaucrat grade " << bureaucrat.get_grade();
	return (os);
}

