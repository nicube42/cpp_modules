/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:35:08 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 15:57:14 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP

# define SCALARCONVERTER_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

# include <iostream>
# include <string>
# include <fstream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <cmath>

class	ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &scalarconverter);
		ScalarConverter  &operator= (const ScalarConverter &scalarconverter);

	public:

		virtual ~ScalarConverter(void) = 0;

		static void convert(const std::string str);
};

#endif
