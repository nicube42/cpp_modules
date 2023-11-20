/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:29 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 16:09:03 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t numericPtr = reinterpret_cast<uintptr_t>(ptr);
	return (numericPtr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* originalPtr = reinterpret_cast<Data*>(raw);
	return (originalPtr);
}
