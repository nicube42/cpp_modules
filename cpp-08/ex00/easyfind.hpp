/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:12:50 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 14:58:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include <iterator>

template <typename T>
void	easyfind(T param1, int param2);

#include "easyfind.tpp"

#endif
