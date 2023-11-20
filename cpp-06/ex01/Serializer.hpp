/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:55:32 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/20 16:07:18 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP

# define SERIALIZER_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include <limits>
# include <cmath>
# include <cstdint>

struct Data
{
	int intValue;
	std::string stringValue;
};

class	Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer &serializer);
		Serializer  &operator= (const Serializer &serializer);

	public:

		virtual ~Serializer(void) = 0;

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
