/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:44:57 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 10:17:57 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP

# define BASE_HPP

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

class	Base
{
	private:

	public:

		Base(void);
		virtual ~Base(void);

		class WrongClassException : public std::exception
		{
			public:
			const char* what() const throw() {
				return "neither A B or C";
			}
		};

		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base &p);

};

#endif
