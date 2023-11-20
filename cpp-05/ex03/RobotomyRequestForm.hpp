/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:08:44 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/17 14:09:28 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"

class	Bureaucrat;

class	RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;

		RobotomyRequestForm(void);

	public:
	
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm(void);

		void	execute(Bureaucrat const &executor);

		friend std::ostream &operator<<(std::ostream& os, const AForm &AForm);

};

#endif
