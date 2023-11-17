/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:17:07 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 11:56:44 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP

# define AForm_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
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

		class NotSigned : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return "form not signed";
			}
		};
			
		AForm(void);
		AForm(std::string name, int grade_sign, int grade_execute);
		virtual ~AForm(void) {};

		friend std::ostream &operator<<(std::ostream& os, const AForm &AForm);

		const std::string	get_name(void) const;
		bool				get_status(void) const;
		int					get_grade_sign(void) const;
		int					get_grade_execute(void) const;

		void				beSigned(Bureaucrat &bureaucrat);

		virtual void		execute(Bureaucrat const & executor) = 0;
};

#endif
