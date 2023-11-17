/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:07 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 11:56:44 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
	
		const std::string	_name;
		bool				_signed;
		const int			_grade_required_sign;
		const int			_grade_required_execute;

	public:
	
		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return "Grade too high";
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return "Grade too low";
			}
		};
			
		Form(void);
		Form(std::string name, int grade_sign, int grade_execute);
		~Form(void);

		friend std::ostream &operator<<(std::ostream& os, const Form &form);

		const std::string	get_name(void) const;
		bool				get_status(void) const;
		int			get_grade_sign(void) const;
		int			get_grade_execute(void) const;

		void				beSigned(Bureaucrat &bureaucrat);
};

#endif
