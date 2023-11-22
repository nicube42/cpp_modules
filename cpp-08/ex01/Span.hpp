/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:04:01 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 16:48:19 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

# define SPAN_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

#define MAX_INT 2147483647

# include <iostream>
# include <string>
# include <vector>
# include <iterator>
# include <stdexcept>
# include <random>

class	Span
{
	private:

	unsigned int		_n;
	unsigned int		_quantity;
	std::vector<int>	_list;

	public:

		Span(void);
		Span(const int number);
		Span(const Span &span);
		Span		&operator= (const Span &span);
		~Span(void);

		void	addNumber(const int number);
		void	fillNumbersRandom(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

};

#endif
