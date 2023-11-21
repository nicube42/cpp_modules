/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:27 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 12:14:16 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data myData = {42, "Example"};
	Data* dataPtr = &myData;

	std::cout << GREEN << "Data content before serialization: " << RESET << dataPtr->intValue << ", "
			<< dataPtr->stringValue << std::endl << std::endl;

	uintptr_t serializedData = Serializer::serialize(dataPtr);
	Data* deserializedData = Serializer::deserialize(serializedData);
	
	if (deserializedData == dataPtr)
	{
		std::cout << "Serialization and deserialization successful." << std::endl << std::endl;
		std::cout << RED << "Data after deserialization: " << RESET << deserializedData->intValue << ", "
			<< deserializedData->stringValue << std::endl;
	}
	return (0);
}
