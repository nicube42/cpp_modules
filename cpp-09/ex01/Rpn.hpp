/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:08:24 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 17:39:38 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

# define RPN_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE	"\033[0;34m"
#define MAG		"\033[0;35m"
#define CYN 	"\033[0;36m"

#define MAX_INT 2147483647

# include <iostream>
# include <fstream>
# include <sstream>
# include <regex>
# include <string>
# include <map>
# include <stack>
# include <iterator>
# include <stdexcept>
# include <random>


class	Rpn
{
	private:

		/*
			built on top of an existing container. Of type last in first out (LIFO).
			It is useful in this case because we only need to store and access the lasts elements
			of the list.
		*/
		std::stack<int>	_stack;

	public:

		Rpn(void);
		Rpn(const Rpn &rpn);
		Rpn		&operator= (const Rpn &rpn);
		~Rpn(void);

		void run(const std::string& str);
};

#endif
