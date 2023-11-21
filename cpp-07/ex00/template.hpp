/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:15:51 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 14:44:41 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP

# define TEMPLATE_HPP

# include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

template <typename T>

void	swap(T &arg1, T &arg2)
{
	T	tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>

T	min(T a, T b)
{
	if (a == b)
		return (b);
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>

T	max(T a, T b)
{
	if (a == b)
		return (b);
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
