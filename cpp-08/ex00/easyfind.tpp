/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:14:16 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 14:59:54 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T param1, int param2)
{
	int	i = 0;
	typename T::iterator it;
	for (it = param1.begin(); it != param1.end(); ++it)
	{
		i++;
		if (*it == param2)
		{
			std::cout << GREEN << "The value searched is " << *it << " at position "
					<< i << RESET << std::endl;
			return ;
		}
	}
	throw (std::out_of_range("no occurance found"));
}
