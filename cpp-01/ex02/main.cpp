/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:36:36 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/18 13:00:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of string is: " << &string << std::endl;
	std::cout << "Memory address of stringPTR is: " << &stringPTR << std::endl;
	std::cout << "Memory address of stringREF is: " << &stringREF << std::endl;
	std::cout << "Content of string is: " << string << std::endl;
	std::cout << "Content of stringPTR is: " << stringPTR << std::endl;
	std::cout << "Content of stringREF is: " << stringREF << std::endl;
}
