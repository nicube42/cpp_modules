/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:01:54 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 12:08:50 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

# define ARRAY_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

# include <iostream>
# include <string>

template <class T>
class	Array
{
	private:

		T				*_array;
		unsigned int	_n;

	public:

		Array(void);
		Array(unsigned int n);
		Array(const Array &array);
		Array		&operator= (const Array &array);
		T			&operator[](unsigned int index);
		const T		&operator[](unsigned int index) const;
		~Array(void);

	void			set_array(T toFill);
	void			print_array(void);
	unsigned int	size(void);
};

#include "Array.tpp"

#endif
