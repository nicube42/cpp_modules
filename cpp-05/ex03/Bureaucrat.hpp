/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:47:55 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:12:40 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

# include <iostream>
# include <string>
# include <fstream>
#include <cstdlib>
#include <ctime>

# include "AForm.hpp"

class	AForm;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

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
		
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);

		~Bureaucrat(void);

		Bureaucrat  &operator= (const Bureaucrat &buraucrat);
		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

		const std::string	get_name(void) const;
		int					get_grade(void) const;
		void				increment_grade(void);
		void				decrement_grade(void);
		void				signForm(AForm &aform);
		void				executeForm(AForm &form);
};

#endif
